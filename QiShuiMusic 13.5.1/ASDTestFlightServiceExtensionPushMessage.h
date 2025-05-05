@interface ASDTestFlightServiceExtensionPushMessage : NSObject
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSDate timestamp;
- (id)userInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTimestamp:userInfo:;
+ (BOOL)supportsSecureCoding;
@end
