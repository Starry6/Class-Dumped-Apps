@interface AWEHomepageTrackingService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:withParams:;
- (void)trackEvent:bizParams:hpParams:;
- (id)mergeWithBizParams:hpParams:;
- (id)getTrackListenManager;
- (id)p_mergeWithBizParams:hpParams:;
@end
