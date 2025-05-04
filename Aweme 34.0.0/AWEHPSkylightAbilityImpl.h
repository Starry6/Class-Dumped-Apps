@interface AWEHPSkylightAbilityImpl : NSObject
@property (nonatomic) AWEHPSkylightContainer skylightContainer;
@property (nonatomic) <AWEHPSkylightAccessApproachProtocol> accessApproach;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skylightContainer;
- (void)setSkylightContainer:;
- (id)accessApproach;
- (void)setAccessApproach:;
- (void)p_trackSkylightChangeState:withErrorMessage:withFromStatus:withToStatus:;
- (void)p_updateHomepageSkylightFromState:toState:withProgressState:withAnimate:completion:;
- (void)p_updateHomepageSkylightExpandedUIConfigIfNeed;
- (void)updateHomepageSkylightExpandedUIConfig:withAnimate:completion:;
- (void)updateHomepageSkylightState:withAnimate:completion:;
- (void)updateHomepageSkylightExpandedHeight:withAnimate:completion:;
- (id)initWithSkylightContainer:withAccessApproach:;
- (void).cxx_destruct;
@end
