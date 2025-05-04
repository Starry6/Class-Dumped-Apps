@interface AWEGrouponC2ListDataResponseTrackModel : NSObject
@property (nonatomic) AWEGrouponC2ListDataResponse rsp;
@property (nonatomic) q pullType;
@property (nonatomic) double reqStartTime;
@property (nonatomic) q pageType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString eventName;
- (void)setEnterFrom:;
- (id)enterFrom;
- (long long)pullType;
- (void)setPullType:;
- (void)setReqStartTime:;
- (void)setRsp:;
- (id)rsp;
- (double)reqStartTime;
- (void)setEventName:;
- (void)setPageType:;
- (void).cxx_destruct;
- (id)eventName;
- (long long)pageType;
@end
