@interface AWEDCFeedCellCommonLynxConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enable;
@property (nonatomic) q commonLynxSpacing;
@property (nonatomic) @? extraSpecicalCardJudgeBlock;
@property (nonatomic) @? shouldUseHunterHeightBlock;
@property (nonatomic) @? onLynxDidChangeIntrinsicContentSizeBlock;
- (void)setExtraSpecicalCardJudgeBlock:;
- (long long)commonLynxSpacing;
- (void)setCommonLynxSpacing:;
- (id)extraSpecicalCardJudgeBlock;
- (id)shouldUseHunterHeightBlock;
- (void)setShouldUseHunterHeightBlock:;
- (id)onLynxDidChangeIntrinsicContentSizeBlock;
- (void)setOnLynxDidChangeIntrinsicContentSizeBlock:;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setEnable:;
@end
