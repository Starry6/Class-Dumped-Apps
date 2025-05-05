@interface PHBatchAssetExpunger : NSObject
- (void).cxx_destruct;
- (id)initWithAssets:deleteOptions:library:batchSize:;
- (BOOL)performChangesAndWait:;
- (void)performChangesWithCompletionHandler:;
- (void)_batchExpungeInRange:;
+ (id)batchAssetExpungerWithAssets:deleteOptions:library:topLevelSelector:;
@end
