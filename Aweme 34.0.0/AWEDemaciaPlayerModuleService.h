@interface AWEDemaciaPlayerModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)settingTypeView;
- (Class)settingTypeViewClass;
- (Class)demaciaPlayerViewClass;
- (id)demaciaPlayerViewWithFrame:initModel:;
- (Class)noxusPlayerViewClass;
- (Class)demaciaModelTransferUtil;
- (id)noxusPlayerInfoRecorder;
- (id)demaciaPlayerImageNamed:;
- (id)generalPlayerWithConfig:logExtraDict:;
- (id)noxusPlayerViewWithFrame:initModel:;
@end
