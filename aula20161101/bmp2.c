fseek (imagem , 10, SEEK_SET);
fread (&dword, siseof (dword), imagem);
rewind (imagem);
for (i= 0; i< dword; i++){
	fread (&byte, sizeof (byte), imagem);
		fwrite (&byte, sizeof (byte), imagem2);

	
}
