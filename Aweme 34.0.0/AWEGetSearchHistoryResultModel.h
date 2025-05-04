@interface AWEGetSearchHistoryResultModel : IESLiveBridgeModel
@property (nonatomic) @ data;
@property (nonatomic) NSArray historyArray;
@property (nonatomic) BOOL isNormalSearchHistoryWordChanged;
- (id)historyArray;
- (void)setHistoryArray:;
- (BOOL)isNormalSearchHistoryWordChanged;
- (void)setIsNormalSearchHistoryWordChanged:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
