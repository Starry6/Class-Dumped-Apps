@interface AWEGrouponFeedResponseTrackModel : NSObject
@property (nonatomic) AWEGrouponListDataResponse model;
@property (nonatomic) NSDictionary params;
@property (nonatomic) q pullType;
@property (nonatomic) BOOL isPreRequest;
@property (nonatomic) double requestDataTime;
@property (nonatomic) double requestDuration;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double requestParamsDuration;
- (long long)pullType;
- (void)setPullType:;
- (BOOL)isPreRequest;
- (double)requestDataTime;
- (double)requestParamsDuration;
- (void)setIsPreRequest:;
- (void)setRequestDataTime:;
- (void)setRequestParamsDuration:;
- (void)setModel:;
- (id)init;
- (double)requestStartTime;
- (void)setRequestStartTime:;
- (double)requestDuration;
- (id)model;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (void)setRequestDuration:;
@end
