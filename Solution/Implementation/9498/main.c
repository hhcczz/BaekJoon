int main()
{
	int Exam_Result;

	scanf("%d", &Exam_Result);
	if (Exam_Result >= 90) printf("A");
	else if (Exam_Result >= 80) printf("B");
	else if (Exam_Result >= 70) printf("C");
	else if (Exam_Result >= 60) printf("D");
	else printf("F");
	return 0;
}
