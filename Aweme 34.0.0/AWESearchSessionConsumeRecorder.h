@interface AWESearchSessionConsumeRecorder : NSObject
@property (nonatomic) NSMutableArray displayedConsumeModels;
@property (nonatomic) NSMutableDictionary consumeModelsMappingDic;
@property (nonatomic) @? currentAllBusinessModelsBlock;
- (void)updateDisplayTypeWithModel:;
- (void)setCurrentAllBusinessModelsBlock:;
- (void)flushWithModels:docFeatures:;
- (void)flushDisplayTypeWithCurrentIndex:;
- (id)getSearchResultRawDataWithModels:;
- (id)getDocListLogRawDataWithModels:;
- (id)getSessionConsumeRawDataWithRecentListSize:;
- (void)setDisplayedConsumeModels:;
- (void)setConsumeModelsMappingDic:;
- (id)displayedConsumeModels;
- (id)consumeModelsMappingDic;
- (id)p_identifierWithModel:;
- (id)currentAllBusinessModelsBlock;
- (id)p_currentBusinessModels;
- (void)cleanUp;
- (id)init;
- (void).cxx_destruct;
@end
