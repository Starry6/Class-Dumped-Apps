@interface CHTextInputQuery : CHQuery
@property (nonatomic) NSArray availableItems;
@property (nonatomic) double totalDuration;
@property (nonatomic) <CHTextInputQueryTargetDataSource> textInputTargetsDataSource;
- (void)dealloc;
- (id)debugName;
- (double)totalDuration;
- (void).cxx_destruct;
- (id)availableItems;
- (void)setTotalDuration:;
- (void)setTextInputTargetsDataSource:;
- (id)initWithRecognitionSession:;
- (void)q_updateQueryResult;
- (id)q_textInputItemsFromSessionResult:;
- (void)_setAvailableItems:;
- (id)textInputTargetsDataSource;
+ (id)queryItemStableIdentifierForStrokeGroup:;
@end
