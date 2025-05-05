@interface EKSyncError : EKObject
@property (nonatomic) Q errorType;
@property (nonatomic) Q errorCode;
@property (nonatomic) NSDictionary userInfo;
- (unsigned long long)errorCode;
- (id)userInfo;
- (void)setUserInfo:;
- (void)setErrorCode:;
- (void)setUserInfoData:;
- (id)userInfoData;
- (unsigned long long)errorType;
- (void)setErrorType:;
- (id)initWithAccountError:userInfo:;
- (id)initWithCalendarError:userInfo:;
- (id)initWithCalendarItemError:userInfo:;
+ (Class)frozenClass;
+ (id)augmentSyncErrorUserInfo:for:;
+ (id)knownIdentityKeysForComparison;
@end
