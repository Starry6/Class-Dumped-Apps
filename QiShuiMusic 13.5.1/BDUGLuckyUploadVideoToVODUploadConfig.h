@interface BDUGLuckyUploadVideoToVODUploadConfig : BDXBridgeModel
@property (nonatomic) NSNumber sliceSize;
@property (nonatomic) NSNumber socketNum;
@property (nonatomic) NSString traceId;
- (void)setSliceSize:;
- (void)setSocketNum:;
- (void)setTraceId:;
- (id)sliceSize;
- (id)socketNum;
- (id)traceId;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
