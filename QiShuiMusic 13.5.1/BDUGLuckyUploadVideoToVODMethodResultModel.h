@interface BDUGLuckyUploadVideoToVODMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString traceId;
@property (nonatomic) BDUGLuckyUploadVideoToVODErrorInfo errorInfo;
@property (nonatomic) BDUGLuckyUploadVideoToVODVideoInfo videoInfo;
- (id)errorInfo;
- (void)setErrorInfo:;
- (void)setTraceId:;
- (void)setVideoInfo:;
- (id)videoInfo;
- (id)traceId;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
