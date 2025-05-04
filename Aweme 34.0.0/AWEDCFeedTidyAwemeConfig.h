@interface AWEDCFeedTidyAwemeConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enableTidyAweme;
@property (nonatomic) BOOL enableTidyAwemeOpt;
@property (nonatomic) BOOL enableNewTidyAwemeDetailOpt;
@property (nonatomic) BOOL optChunkCoverPreload;
@property (nonatomic) BOOL optHeightCalculate;
@property (nonatomic) <AWEDCFeedTidyModelOuterDataControllerProtocol> outerTidyModelDataController;
@property (nonatomic) BOOL useChunk;
- (void)setUseChunk:;
- (void)setOptHeightCalculate:;
- (void)setOptChunkCoverPreload:;
- (void)setEnableTidyAweme:;
- (void)setEnableNewTidyAwemeDetailOpt:;
- (void)setOuterTidyModelDataController:;
- (void)setupDefaultConfig;
- (BOOL)optHeightCalculate;
- (BOOL)enableTidyAweme;
- (BOOL)enableTidyAwemeOpt;
- (void)setEnableTidyAwemeOpt:;
- (BOOL)enableNewTidyAwemeDetailOpt;
- (BOOL)optChunkCoverPreload;
- (id)outerTidyModelDataController;
- (BOOL)useChunk;
- (void).cxx_destruct;
@end
