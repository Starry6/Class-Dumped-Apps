@interface BCAABundleModel : NSObject
@property (nonatomic) NSBundle bundle;
@property (nonatomic) NSString fromBundle;
@property (nonatomic) NSString enterTag;
@property (nonatomic) BOOL isActive;
@property (nonatomic) double load_cost_time;
@property (nonatomic) double active_cost_time;
@property (nonatomic) BOOL hasBroadcastPreloadEnter;
@property (nonatomic) ^{__CFBundle=} bundleRef;
- (double)active_cost_time;
- (id)bundleRef;
- (id)enterTag;
- (id)fromBundle;
- (BOOL)hasBroadcastPreloadEnter;
- (id)initWithBundle:fromBundle:enterTag:;
- (double)load_cost_time;
- (void)setActive_cost_time:;
- (void)setBundleRef:;
- (void)setEnterTag:;
- (void)setFromBundle:;
- (void)setHasBroadcastPreloadEnter:;
- (void)setLoad_cost_time:;
- (void)setIsActive:;
- (id)bundle;
- (void).cxx_destruct;
- (void)setBundle:;
- (BOOL)isActive;
- (id)copyWithZone:;
@end
