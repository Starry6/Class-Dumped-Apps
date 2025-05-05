@interface CHStrokeGroupQuery : CHQuery
@property (nonatomic) NSArray strokeGroupItems;
@property (nonatomic) NSDictionary strokeGroupItemsByID;
- (id)debugName;
- (void).cxx_destruct;
- (id)tokenizedStrokeResultForInitialStrokes:point:tokenizationLevel:completion:shouldCancel:;
- (id)strokeGroupItems;
- (void)q_updateQueryResult;
- (id)q_strokeGroupItemsFromSessionResult:;
- (long long)q_itemTypeForStrokeGroup:recognitionResult:;
- (id)tokenizedStrokeResultForInitialStrokes:point:tokenizationLevel:;
- (void)_setStrokeGroupItems:;
- (id)strokeGroupItemsByID;
- (void)_setStrokeGroupItemsByID:;
@end
