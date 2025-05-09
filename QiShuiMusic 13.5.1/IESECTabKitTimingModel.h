@interface IESECTabKitTimingModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) double pageCreateTime;
@property (nonatomic) double tabCreateTime;
@property (nonatomic) double tabEnterTime;
@property (nonatomic) double tabLeaveTime;
@property (nonatomic) double tabDataRequestStartTime;
@property (nonatomic) double tabDataRequestEndTime;
@property (nonatomic) double hybridViewCreateTime;
@property (nonatomic) double hybridViewLoadFinishTime;
@property (nonatomic) NSError hybridViewLoadFinishError;
- (double)hybridViewCreateTime;
- (id)hybridViewLoadFinishError;
- (double)hybridViewLoadFinishTime;
- (id)iesectabkit_timing_toDict;
- (double)pageCreateTime;
- (void)setHybridViewCreateTime:;
- (void)setHybridViewLoadFinishError:;
- (void)setHybridViewLoadFinishTime:;
- (void)setPageCreateTime:;
- (void)setTabCreateTime:;
- (void)setTabDataRequestEndTime:;
- (void)setTabDataRequestStartTime:;
- (void)setTabEnterTime:;
- (void)setTabLeaveTime:;
- (double)tabCreateTime;
- (double)tabDataRequestEndTime;
- (double)tabDataRequestStartTime;
- (double)tabEnterTime;
- (double)tabLeaveTime;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
