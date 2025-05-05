@interface IESLiveNativeAppEntranceMonitorModel : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString entranceType;
@property (nonatomic) NSString entranceSource;
@property (nonatomic) NSString stage;
@property (nonatomic) NSString stageDesc;
@property (nonatomic) NSString stageExtra;
@property (nonatomic) double duration;
- (id)entranceSource;
- (id)entranceType;
- (void)setEntranceSource:;
- (void)setEntranceType:;
- (void)setStageDesc:;
- (void)setStageExtra:;
- (id)stageDesc;
- (id)stageExtra;
- (id)stage;
- (void)setStage:;
- (void)setDuration:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (double)duration;
@end
