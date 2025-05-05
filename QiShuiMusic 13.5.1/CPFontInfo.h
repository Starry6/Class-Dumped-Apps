@interface CPFontInfo : NSObject
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (float)readFloat;
- (int)kernUnitsPerEm;
- (id)initWithFontData:;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (int)readLong;
- (id)readRect;
- (BOOL)getDescriptor:;
- (id)newKernData;
@end
