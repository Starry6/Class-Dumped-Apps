@interface CNCalculatesMultiValueDiff : NSObject
- (void).cxx_destruct;
- (id)updates;
- (void)calculateDiff;
- (id)initWithMultiValue1:multiValue2:;
- (void)setupOriginalIdentifiers;
- (void)setupFinalIdentifiers;
- (void)setupRemovedIdentifiers;
- (void)setupAddedIdentifiers;
- (void)setupSameIdentifiers;
- (void)setupCalculatedFinalIdentifiers;
- (void)appendRemoveUpdates;
- (void)appendAddUpdates;
- (void)appendReplaceUpdates;
- (void)appendReorderUpdates;
+ (id)diffMultiValue:toMultiValue:;
@end
