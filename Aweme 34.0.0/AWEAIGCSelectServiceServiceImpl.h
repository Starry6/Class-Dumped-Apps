@interface AWEAIGCSelectServiceServiceImpl : ACCRecorderViewModel
@property (nonatomic) <ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)switchModeService;
- (void)setSwitchModeService:;
- (void)aigcClickTakeSameWithEffect:publishViewModel:trackParams:;
- (void)aigcClickTakeSameWithEffect:effectId:publishViewModel:trackParams:extraPassInfo:;
- (void)createNewEffectWithEffect:keyWords:trackParams:;
- (void)clearAIGCInfo;
- (id)getNormalTrackParams:;
- (void).cxx_destruct;
@end
