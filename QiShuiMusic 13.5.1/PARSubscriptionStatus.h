@interface PARSubscriptionStatus : NSObject
@property (nonatomic) BOOL isSubscribed;
- (BOOL)isSubscribed;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (void)setIsSubscribed:;
+ (BOOL)supportsSecureCoding;
@end
