@interface IESLiveGuideComponent : IESLiveComponentBase
@property (nonatomic) IESLiveSaaSGuideModel room;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) HTSEventContext trackContext;
- (id)componentContext;
- (void)setComponentContext:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
+ (BOOL)componentShouldActive:;
@end
