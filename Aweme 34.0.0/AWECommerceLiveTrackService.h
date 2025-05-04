@interface AWECommerceLiveTrackService : HTSService
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackLiveEffectADEventWithLabel:extra:;
- (void)trackLiveComponentADEventWithLabel:refer:extra:;
- (void)trackLiveCellEventWithLabel:event:model:extra:;
- (void)trackLiveInnerReceiveWithParams:;
- (void)resetModelWithLiveBreak;
- (void)trackOtherclickAdLiveInnerDislike:;
- (void)trackURLWithURLModelWithLabel:extra:trackLabel:;
- (BOOL)checkIsSameModel:andExtra:;
- (void)resetModelWithDiffAweme:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
