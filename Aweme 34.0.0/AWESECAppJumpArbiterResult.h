@interface AWESECAppJumpArbiterResult : AWESECAppJumpBasicCheckResult
@property (nonatomic) NSString secResultAction;
@property (nonatomic) BOOL isShowMiddlePage;
@property (nonatomic) Q sampleRate;
@property (nonatomic) Q stackSampleRate;
- (unsigned long long)stackSampleRate;
- (long long)secResultActionCode;
- (void)setSecResultAction:;
- (id)secResultAction;
- (void)setIsShowMiddlePage:;
- (void)setStackSampleRate:;
- (BOOL)isShowMiddlePage;
- (unsigned long long)sampleRate;
- (id)init;
- (void).cxx_destruct;
- (void)setSampleRate:;
@end
