@interface ASDNotification : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary userInfo;
- (id)userInfo;
- (id)initWithName:userInfo:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
+ (BOOL)supportsSecureCoding;
+ (id)notificationWithName:userInfo:;
@end
