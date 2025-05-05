@interface EFMutableByteSet : EFByteSet
- (void)invert;
- (id)copyWithZone:;
- (void)addBytesInRange:;
- (void)removeBytesInRange:;
@end
