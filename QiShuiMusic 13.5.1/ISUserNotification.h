@interface ISUserNotification : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) Q optionFlags;
@property (nonatomic) q allowedRetryCount;
@property (nonatomic) q currentRetryCount;
@property (nonatomic) NSDictionary userInfo;
- (void)setAllowedRetryCount:;
- (id)dictionary;
- (id)init;
- (void)dealloc;
- (id)userInfo;
- (long long)allowedRetryCount;
- (void)setUserInfo:;
- (unsigned long long)optionFlags;
- (long long)currentRetryCount;
- (void)setCurrentRetryCount:;
- (id)initWithDictionary:options:;
- (id)copyUserNotification;
@end
