@interface AWEFeedLiveTabVCFactory : NSObject
@property (nonatomic) BOOL enableUseNewLiveTab;
- (void)setEnableUseNewLiveTab:;
- (BOOL)enableUseNewLiveTab;
- (BOOL)enableSwitchToNewLiveTab;
+ (id)generateFeedLiveTabViewControllerWithEnterFrom:params:;
+ (id)sharedInstance;
@end
