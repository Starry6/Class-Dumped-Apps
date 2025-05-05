@interface BDUGLuckyCustomFaultTagManager : NSObject
@property (nonatomic) q counterCreated;
@property (nonatomic) q counterAppeared;
@property (nonatomic) NSDictionary activityTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)counterAppeared;
- (BOOL)isSmallTraffic:;
- (void)onUGPageCreated;
- (id)activityTags;
- (long long)counterCreated;
- (void)onUGPageAppeared;
- (void)onUGPageDestroyed;
- (void)onUGPageDisappeared;
- (void)rewriteApplogCustomHeaderBlock;
- (void)setActivityTags:;
- (void)setCounterAppeared:;
- (void)setCounterCreated:;
- (void)settingsDidUpdateNotification:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (void)startup;
+ (id)serviceProtocol;
@end
