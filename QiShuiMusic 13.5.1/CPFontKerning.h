@interface CPFontKerning : NSObject
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (id)initWithKernData:;
- (id)initWithCGFont:;
- (unsigned short)readUnsignedShort;
- (short)readShort;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doTTSubtable;
- (void)doOTSubtable;
- (void)doTable;
- (id)createKernTable;
@end
