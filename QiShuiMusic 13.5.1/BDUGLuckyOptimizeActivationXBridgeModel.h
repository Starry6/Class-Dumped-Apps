@interface BDUGLuckyOptimizeActivationXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) q optimizeType;
@property (nonatomic) NSString patternToken;
@property (nonatomic) NSString toAid;
@property (nonatomic) NSString installState;
@property (nonatomic) NSString writeClipboardToast;
- (long long)optimizeType;
- (id)patternToken;
- (void)setOptimizeType:;
- (void)setPatternToken:;
- (void)setToAid:;
- (void)setWriteClipboardToast:;
- (id)toAid;
- (id)writeClipboardToast;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setInstallState:;
- (id)installState;
+ (id)JSONKeyPathsByPropertyKey;
@end
