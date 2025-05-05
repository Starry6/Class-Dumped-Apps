@interface CTBundle : NSObject
@property (nonatomic) q type;
- (id)init;
- (void)setType:;
- (id)initWithCoder:;
- (id)initWithBundleType:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
