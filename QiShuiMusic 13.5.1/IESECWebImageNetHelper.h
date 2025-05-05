@interface IESECWebImageNetHelper : NSObject
@property (nonatomic) BOOL inRunning;
@property (nonatomic) q netQuality;
- (BOOL)inRunning;
- (long long)netQuality;
- (void)onNetConnectionTypeChange:;
- (void)registerNetConnectionTypeChangeNotification;
- (void)setInRunning:;
- (void)setNetQuality:;
- (void)updateCurrentNetConnectType;
- (void)dealloc;
- (void)startIfNeeded;
+ (id)sharedInstance;
@end
