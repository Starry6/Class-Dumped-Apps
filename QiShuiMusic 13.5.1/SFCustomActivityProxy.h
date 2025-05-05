@interface SFCustomActivityProxy : NSObject
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString activityTitle;
@property (nonatomic) UIImage activityImage;
@property (nonatomic) Q activityProxyID;
- (id)activityTitle;
- (id)activityType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)activityImage;
- (id)initWithActivity:;
- (id)_initWithActivityType:title:image:proxyID:;
- (id)activityTypeWithActivity:;
- (unsigned long long)activityProxyID;
+ (BOOL)supportsSecureCoding;
@end
