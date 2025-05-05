@interface PFPosterMediaImage : PFPosterMedia
@property (nonatomic) NSString imageName;
- (void)setImageName:;
- (id)imageName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithImageName:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
