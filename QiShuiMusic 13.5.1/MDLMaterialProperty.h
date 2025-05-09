@interface MDLMaterialProperty : NSObject
@property (nonatomic) BOOL isDefaultValue;
@property (nonatomic) MDLBufferView bufferData;
@property (nonatomic) Q stride;
@property (nonatomic) Q semantic;
@property (nonatomic) Q type;
@property (nonatomic) NSString name;
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSURL URLValue;
@property (nonatomic) MDLTextureSampler textureSamplerValue;
@property (nonatomic) ^{CGColor=} color;
@property (nonatomic) float floatValue;
@property (nonatomic)  float2Value;
@property (nonatomic)  float3Value;
@property (nonatomic)  float4Value;
@property (nonatomic) {?=[4]} matrix4x4;
@property (nonatomic) float luminance;
- (float)luminance;
- (float)floatValue;
- (void)dealloc;
- (void)setName:;
- (void)setColor:;
- (void)setProperties:;
- (void)setType:;
- (unsigned long long)semantic;
- (unsigned long long)stride;
- (void)setSemantic:;
- (void)setStringValue:;
- (id)color;
- (unsigned long long)type;
- (void)clear;
- (id)stringValue;
- (void)setFloatValue:;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
- (id)bufferData;
- (id)URLValue;
- (id)float4Value;
- (id)float3Value;
- (id)initWithName:buffer:;
- (id)initWithName:semantic:;
- (id)initWithName:semantic:color:;
- (id)matrix4x4;
- (id)initWithName:semantic:float2:;
- (id)initWithName:semantic:float3:;
- (id)initWithName:semantic:float4:;
- (id)initWithName:semantic:float:;
- (id)initWithName:semantic:matrix4x4:;
- (id)initWithName:semantic:string:;
- (id)initWithName:semantic:textureSampler:;
- (id)float2Value;
- (void)setLuminance:;
- (void)setFloat2Value:;
- (void)setFloat3Value:;
- (void)setFloat4Value:;
- (id)initWithName:semantic:URL:;
- (id)initWithName:semantic:float4WithSRGBA:;
- (id)initWithName:buffer:stride:;
- (void)setURLValue:;
- (id)textureSamplerValue;
- (void)setTextureSamplerValue:;
- (void)setMatrix4x4Value:;
- (void)_encodeVector:withCoder:forKey:;
- (void)_encodeMatrixPropertyWithCoder:forKey:;
- (void)encodeMaterialPropertyWithCoder:forKey:allocator:;
- (void)setMatrix4x4:;
- (BOOL)isDefaultValue;
- (void)setIsDefaultValue:;
+ (id)_decodeVectorWithCoder:forKey:;
+ (id)_decodeMatrixPropertyWithCoder:forKey:;
+ (id)decodeMaterialPropertyWithCoder:forKey:allocator:;
@end
