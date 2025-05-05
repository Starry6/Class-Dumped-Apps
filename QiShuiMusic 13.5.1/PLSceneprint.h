@interface PLSceneprint : PLManagedObject
@property (nonatomic) NSData data;
@property (nonatomic) NSData duplicateMatchingData;
@property (nonatomic) NSData duplicateMatchingAlternateData;
@property (nonatomic) PLAdditionalAssetAttributes additionalAssetAttributes;
- (void)willSave;
- (void)setDuplicateMatchingData:duplicateMatchingAlternateData:;
+ (id)entityName;
+ (id)insertInCurrentManagedObjectContext:withAdditionalAssetAttributes:;
@end
