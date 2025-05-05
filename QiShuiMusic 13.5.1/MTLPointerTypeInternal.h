@interface MTLPointerTypeInternal : MTLPointerType
- (unsigned long long)access;
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)dataSize;
- (id)elementArrayType;
- (id)structType;
- (BOOL)isConstantBuffer;
- (unsigned long long)dataType;
- (BOOL)elementIsArgumentBuffer;
- (unsigned long long)elementType;
- (id)initWithElementType:elementTypeDescription:access:alignment:dataSize:elementIsIndirectArgumentBuffer:isConstantBuffer:;
- (id)initWithElementType:elementTypeDescription:access:alignment:dataSize:elementIsIndirectArgumentBuffer:isConstantBuffer:doRetain:;
- (id)elementTypeDescription;
- (id)elementStructType;
- (void)setAlignment:dataSize:;
- (unsigned long long)alignment;
- (BOOL)elementIsIndirectArgumentBuffer;
@end
