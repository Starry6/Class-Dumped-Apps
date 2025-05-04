@interface AWEHPNearbyTabJumpModel : NSObject
@property (nonatomic) AWEHPTabJumpModelContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tabJumpGuideShowWithModel:withComponent:withTrackParams:;
- (void)tabJumpGuideClickWithModel:withComponent:withTrackParams:;
- (id)landingUrlWithModel:withUrlString:withComponent:;
- (void)p_nearbyTrackEvent:withModel:withComponent:withTrackParams:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
