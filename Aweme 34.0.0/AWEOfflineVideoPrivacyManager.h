@interface AWEOfflineVideoPrivacyManager : NSObject
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) NSTimer videoPrivacyCheckTimer;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)handleConnectionChanged:;
- (void)checkAllVideoPrivacy;
- (void)deleteInvalidResourceWithCheckResults:;
- (void)timer_checkAllVideoPrivacy;
- (id)videoPrivacyCheckTimer;
- (void)setVideoPrivacyCheckTimer:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)resetTimer;
+ (id)sharedInstance;
@end
