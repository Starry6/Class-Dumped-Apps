@interface ASCImageRenderer : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {UIEdgeInsets=dddd} capInsets;
@property (nonatomic) q renderingMode;
- (long long)renderingMode;
- (id)initWithSize:;
- (id)imageWithActions:;
- (unsigned long long)hash;
- (id)capInsets;
- (id)description;
- (BOOL)isEqual:;
- (id)size;
- (id)initWithSize:capInsets:renderingMode:;
+ (id)systemImageNamed:compatibleWithTraitCollection:;
+ (id)bundleImageNamed:compatibleWithTraitCollection:;
@end
