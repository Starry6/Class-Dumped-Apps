@interface MTLIndirectConstantArgument : MTLBindingInternal
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataSize;
- (id)initWithName:type:access:isActive:locationIndex:dataType:pixelFormat:aluType:dataSize:alignment:;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)bufferALUType;
- (unsigned long long)bufferPixelFormat;
@end
