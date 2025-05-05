@interface BDUGLocationServiceEnabledTask : NSObject
@property (nonatomic) BOOL locationServiceEnabled;
@property (nonatomic) BOOL locationServiceTrust;
@property (nonatomic) Q locationServiceSyncCount;
- (void)_getCurrentLocationServiceEnabledWithChangeToForeground:completion:;
- (void)getCurrentLocationServiceEnabledWithCompletion:;
- (BOOL)locServiceEnabled;
- (unsigned long long)locationServiceSyncCount;
- (BOOL)locationServiceTrust;
- (void)onReceivedDidEnterBackground;
- (void)onReceivedWillEnterForegroundWithCompletion:;
- (void)setLocationServiceSyncCount:;
- (void)setLocationServiceTrust:;
- (id)init;
- (void)dealloc;
- (void)setLocationServiceEnabled:;
- (BOOL)locationServiceEnabled;
+ (id)sharedTask;
@end
