@interface AWEECOMIMTrackClickChainTask : NSObject
@property (nonatomic) AWEECOMIMPageTrackParamsModel clickParamsModel;
@property (nonatomic) AWEECOMIMPageClickTask clickTaskModel;
@property (nonatomic) double startTime;
- (void)addClickChainParams:;
- (id)clickTaskModel;
- (void)addDurationWithKey:;
- (void)addParamsObject:WithKey:;
- (void)setClickParamsModel:;
- (void)setClickTaskModel:;
- (id)clickParamsModel;
- (void)setStartTime:;
- (void).cxx_destruct;
- (double)startTime;
+ (id)instanceWithLocationType:locationSubType:clickArea:otherParams:eventName:clickUtil:;
+ (id)instanceWithLocationType:locationSubType:clickArea:otherParams:clickUtil:;
@end
