@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject
@property (nonatomic) Q accountID;
@property (nonatomic) Q fairPlaySessionID;
- (unsigned long long)accountID;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)initWithAccountID:fairPlaySessionID:;
- (unsigned long long)fairPlaySessionID;
@end
