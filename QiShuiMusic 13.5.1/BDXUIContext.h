@interface BDXUIContext : BDXSubContext
@property (nonatomic) BDXIPadAdapteConfig iPadConfig;
@property (nonatomic) @? calcInitialFrameBlock;
@property (nonatomic) @? calcFinalFrameBlock;
@property (nonatomic) @? customOrientation;
- (id)calcFinalFrameBlock;
- (id)calcInitialFrameBlock;
- (id)customOrientation;
- (id)iPadConfig;
- (void)mergeContext:shouldOverride:;
- (void)setCalcFinalFrameBlock:;
- (void)setCalcInitialFrameBlock:;
- (void)setCustomOrientation:;
- (void)setIPadConfig:;
- (void).cxx_destruct;
@end
