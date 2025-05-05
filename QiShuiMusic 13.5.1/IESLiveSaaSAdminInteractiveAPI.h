@interface IESLiveSaaSAdminInteractiveAPI : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (id)apiRequestByPath:callback:;
- (id)roomModel;
- (void)setRoomModel:;
- (void)updateSettingWithParams:finished:;
- (void).cxx_destruct;
- (void)fetchSettings:;
- (id)initWithRoom:;
@end
