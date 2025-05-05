@interface IESECTabKitAnniePreProcessRsp : NSObject
@property (nonatomic) @ annieXCardModel;
@property (nonatomic) double t_start_pre_create_annie;
@property (nonatomic) double t_finish_pre_create_annie_model;
@property (nonatomic) NSDictionary updateGlobalProps;
@property (nonatomic) NSDictionary updateRouterParams;
- (id)annieXCardModel;
- (double)t_finish_pre_create_annie_model;
- (void)setAnnieXCardModel:;
- (void)setT_finish_pre_create_annie_model:;
- (void)setT_start_pre_create_annie:;
- (void)setUpdateGlobalProps:;
- (void)setUpdateRouterParams:;
- (double)t_start_pre_create_annie;
- (id)updateGlobalProps;
- (id)updateRouterParams;
- (void).cxx_destruct;
@end
