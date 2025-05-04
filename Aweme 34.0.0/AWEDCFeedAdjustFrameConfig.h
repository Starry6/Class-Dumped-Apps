@interface AWEDCFeedAdjustFrameConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enable;
@property (nonatomic) {UIEdgeInsets=dddd} safeArea;
@property (nonatomic) @? shouldAdjustFrameBlock;
- (id)safeArea;
- (void)setSafeArea:;
- (void)setupDefaultConfig;
- (id)shouldAdjustFrameBlock;
- (void)setShouldAdjustFrameBlock:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
@end
