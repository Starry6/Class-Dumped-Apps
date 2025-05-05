@interface MKCuratedCollectionsTestManager : NSObject
- (BOOL)collectionIsSaved:;
- (BOOL)collectionIsSavedWithIdentifier:;
- (id)placeWithCollectionUsingJSONAtPath:;
@end
