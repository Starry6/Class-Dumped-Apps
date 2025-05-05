@interface ASCWatchApps : NSObject
@property (nonatomic) ASCAppOfferStateCenter appOfferStateCenter;
- (void).cxx_destruct;
- (id)reinstallAppWithID:;
- (id)reinstallSystemAppWithBundleID:;
- (id)appOfferStateCenter;
- (id)initWithAppOfferStateCenter:;
+ (id)sharedWatchApps;
@end
