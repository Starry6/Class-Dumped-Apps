@interface MTLBufferBindingInternal : MTLBindingInternal
@property (nonatomic) Q bufferAlignment;
@property (nonatomic) Q bufferDataSize;
@property (nonatomic) Q bufferDataType;
@property (nonatomic) MTLStructType bufferStructType;
@property (nonatomic) MTLPointerType bufferPointerType;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) Q access;
@property (nonatomic) Q index;
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL argument;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)bufferDataType;
- (void)setVertexDescriptorBuffer:;
- (void)dealloc;
- (void)setAlignment:;
- (id)formattedDescription:;
- (unsigned long long)bufferDataSize;
- (void)setStructType:doRetain:;
- (id)initWithName:type:access:isActive:locationIndex:arraySize:dataType:pixelFormat:aluType:isConstantBuffer:dataSize:alignment:;
- (id)structType;
- (void)setStructType:;
- (id)bufferPointerType;
- (BOOL)isVertexDescriptorBuffer;
- (id)bufferStructType;
- (void)setDataSize:;
- (unsigned long long)bufferALUType;
- (unsigned long long)bufferPixelFormat;
- (unsigned long long)bufferAlignment;
- (id)bufferIndirectArgumentType;
@end
