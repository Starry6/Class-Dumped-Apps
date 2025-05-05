@interface BDUGLocationStatusFetcher_Private : NSObject
@property (nonatomic) NSInteger authorizationStatus;
- (void)onReceivedWillEnterForeground;
- (void)setAuthorizationStatus:;
- (id)init;
- (int)authorizationStatus;
- (void)dealloc;
+ (id)sharedInstance;
@end
