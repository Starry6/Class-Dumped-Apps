@interface CSJTwistConfigModel : NSObject
@property (nonatomic) q x_threshold;
@property (nonatomic) q y_threshold;
@property (nonatomic) q z_threshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setY_threshold:;
- (void)setZ_threshold:;
- (void)setX_threshold:;
- (long long)x_threshold;
- (long long)y_threshold;
- (long long)z_threshold;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
+ (id)fromDictionary:;
@end
