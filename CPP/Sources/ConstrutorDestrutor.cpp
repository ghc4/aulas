class date {

  public: int* day; 
  date(int m) { 
      day = new int;
      *day = m; 
  }

  ~date(){ 
      delete day;
      cout << "now the destructor get's called explicitly";
  } 
};

int main() { 
  date *ob2 = new date(12); 
  delete ob2;
  return 0; 
}
