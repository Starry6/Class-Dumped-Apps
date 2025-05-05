@interface CMCalorieUserInfo : CMLogItem
@property (nonatomic) q gender;
@property (nonatomic) double age;
@property (nonatomic) double height;
@property (nonatomic) double weight;
@property (nonatomic) q condition;
@property (nonatomic) BOOL betaBlockerUse;
- (long long)condition;
- (void)dealloc;
- (long long)gender;
- (double)age;
- (double)weight;
- (id)initWithCoder:;
- (double)height;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithAge:gender:height:weight:;
- (id)initWithAge:gender:height:weight:condition:;
- (id)initWithAge:gender:height:weight:condition:betaBlockerUse:;
- (BOOL)betaBlockerUse;
+ (BOOL)supportsSecureCoding;
+ (id)genderString:;
@end
