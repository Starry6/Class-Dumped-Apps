@interface PLAssetCollectionGenerationResult : NSObject
@property (nonatomic) NSSet insertedOrUpdatedMoments;
@property (nonatomic) BOOL frequentLocationsDidChange;
- (id)insertedOrUpdatedMoments;
- (id)initWithInsertedOrUpdatedMoments:frequentLocationsDidChange:;
- (BOOL)frequentLocationsDidChange;
- (void).cxx_destruct;
@end
