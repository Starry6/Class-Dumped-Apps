@interface AWENearbyGrouponListDataResponseTrackModel : NSObject
@property (nonatomic) AWENearbyGrouponListDataResponse rsp;
@property (nonatomic) q pullType;
@property (nonatomic) double reqStartTime;
@property (nonatomic) q pageType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) double ditoParseDuration;
@property (nonatomic) NSDictionary extraTrackParams;
- (void)setEnterFrom:;
- (id)enterFrom;
- (long long)pullType;
- (void)setPullType:;
- (id)extraTrackParams;
- (void)setExtraTrackParams:;
- (void)setReqStartTime:;
- (void)setRsp:;
- (id)rsp;
- (double)reqStartTime;
- (double)ditoParseDuration;
- (void)setDitoParseDuration:;
- (void)setPageType:;
- (void).cxx_destruct;
- (long long)pageType;
@end
