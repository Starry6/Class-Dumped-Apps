@interface AWERTVVirifyManager : NSObject
@property (nonatomic) Q userVerifyStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showIdentityVerifyWithTitle:content:scene:ticket:extra:confirmBlock:closeBlock:checkCompletion:;
- (unsigned long long)getCurrentUserVerifyStatus;
- (BOOL)isUserRealNameVerifyStatusPassed;
- (void)setUserVerifyStatus:;
- (unsigned long long)userVerifyStatus;
@end
