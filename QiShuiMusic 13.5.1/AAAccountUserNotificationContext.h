@interface AAAccountUserNotificationContext : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) NSString altDSID;
@property (nonatomic) q action;
- (void)setAltDSID:;
- (void)setMessage:;
- (id)altDSID;
- (long long)action;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setAction:;
- (void)encodeWithCoder:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
