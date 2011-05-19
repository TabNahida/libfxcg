int Bfile_OpenFile_OS( const unsigned short*filename, int mode );
int Bfile_CloseFile_OS( int HANDLE );
int Bfile_ReadFile_OS( int HANDLE, void *buf, int size, int readpos );
int Bfile_CreateEntry_OS( const unsigned short*filename, int mode, int*size );
int Bfile_WriteFile_OS( int HANDLE, const void *buf, int size );
int Bfile_DeleteEntry( const unsigned short *filename );
void Bfile_StrToName_ncpy( unsigned short*dest, const unsigned char*source, int n );
