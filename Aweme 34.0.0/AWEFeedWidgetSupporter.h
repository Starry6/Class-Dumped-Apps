@interface AWEFeedWidgetSupporter : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSNumber onceInstalled;
@property (nonatomic) NSString imageURLString;
- (id)imageURLString;
- (void)setImageURLString:;
- (void)setMmkv:;
- (id)mmkv;
- (id)feedWidgetSetting;
- (id)onceInstalled;
- (void)setOnceInstalled:;
- (void)reloadFeedWidgetDataIfNeeded;
- (id)feedWidgetUserDefaultsKey;
- (BOOL)checkFeedWidgetOnceInstalled;
- (void)updateFeedWidgetOnceInstalled;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
