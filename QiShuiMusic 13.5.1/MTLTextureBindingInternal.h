@interface MTLTextureBindingInternal : MTLBindingInternal
@property (nonatomic) Q textureType;
@property (nonatomic) Q textureDataType;
@property (nonatomic) BOOL depthTexture;
@property (nonatomic) Q arrayLength;
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
- (unsigned long long)textureType;
- (BOOL)isDepthTexture;
- (id)formattedDescription:;
- (unsigned long long)textureDataType;
- (id)initWithName:access:isActive:locationIndex:arraySize:dataType:textureType:isDepthTexture:;
@end
