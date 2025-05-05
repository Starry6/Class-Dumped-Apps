@interface ICPushNotificationsResponse : NSObject
@property (nonatomic) q statusCode;
- (long long)statusCode;
- (id)initWithResponseDictionary:;
@end
