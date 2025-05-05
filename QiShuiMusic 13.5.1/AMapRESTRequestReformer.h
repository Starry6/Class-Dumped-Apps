@interface AMapRESTRequestReformer : AMapRequestReformer
@property (nonatomic) AMapNetworkFailModel failModel;
@property (nonatomic) AMapNetworkPerformanceModel sucModel;
@property (nonatomic) BOOL autoAddXInfo;
- (BOOL)autoAddXInfo;
- (BOOL)canDegrade;
- (id)failModel;
- (id)httpHeaderAboutAPM;
- (BOOL)isSupportAPM;
- (void)reformParameters:result:;
- (void)request:response:metrics:completeWithError:;
- (void)setAutoAddXInfo:;
- (void)setFailModel:;
- (void)setSucModel:;
- (id)sucModel;
- (id)init;
- (void).cxx_destruct;
@end
