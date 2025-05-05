@interface OspreyMescalAuthentication : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)state;
- (void).cxx_destruct;
- (unsigned long long)authenticationStrategyVersion;
- (void)signData:success:failure:;
- (id)initWithChannel:connectionPreferences:;
- (id)mescalSession;
- (void)moveToState:;
- (BOOL)isSessionExpired;
- (void)_continuePreparationWithCompletion:;
@end
