@interface EDPersistenceDatabaseGenerationWindow : NSObject
@property (nonatomic) q earliestGeneration;
@property (nonatomic) q latestGeneration;
- (id)init;
- (void)insertGeneration:;
- (long long)earliestGeneration;
- (long long)latestGeneration;
@end
