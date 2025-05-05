@interface ASCIconOfferMetadata : ASCOfferMetadata
@property (nonatomic) NSString baseImageName;
@property (nonatomic) NSString animationName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isIcon;
- (id)initWithBaseImageName:animationName:;
- (id)imageNameForSize:;
- (id)animationName;
- (id)baseImageName;
+ (BOOL)supportsSecureCoding;
@end
