@interface SBSPortalSource : NSObject
@property (nonatomic) Q sourceLayerRenderID;
@property (nonatomic) I sourceContextID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)sourceLayerRenderID;
- (unsigned int)sourceContextID;
- (id)initWithSourceContextID:sourceLayerRenderID:;
+ (BOOL)supportsSecureCoding;
@end
