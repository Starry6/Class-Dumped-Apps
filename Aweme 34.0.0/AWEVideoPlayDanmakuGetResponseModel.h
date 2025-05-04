@interface AWEVideoPlayDanmakuGetResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray danmakuList;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q statuscode;
@property (nonatomic) q total;
@property (nonatomic) NSString statusmsg;
- (id)danmakuList;
- (void)setDanmakuList:;
- (long long)statuscode;
- (void)setStatuscode:;
- (id)statusmsg;
- (void)setStatusmsg:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (long long)total;
- (double)startTime;
- (void)setTotal:;
+ (id)danmakuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
