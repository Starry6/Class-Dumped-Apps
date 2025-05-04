@interface AWEMusicStreamingImpl.LunaBaseApiResponseModel : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q statusCode;
@property (nonatomic) _TtC21AWEMusicStreamingImpl10StatusInfo statusInfo;
@property (nonatomic) NSDictionary jsonResponse;
- (BOOL)isBizSuccess;
- (id)statusInfo;
- (void)setStatusInfo:;
- (id)jsonResponse;
- (void)setJsonResponse:;
- (BOOL)isSilenceRisk;
- (BOOL)isRejectRisk;
- (id)bizError;
- (long long)statusCode;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)initWithCoder:;
+ (id)statusInfoJSONTransformer;
@end
