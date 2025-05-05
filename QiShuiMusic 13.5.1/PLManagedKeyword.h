@interface PLManagedKeyword : PLManagedObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString title;
@property (nonatomic) NSString shortcut;
@property (nonatomic) NSSet assetAttributes;
- (id)payloadID;
- (id)payloadIDForTombstone:;
- (id)payloadForChangedKeys:;
- (void)awakeFromInsert;
+ (id)entityName;
+ (id)keywordForTitle:context:;
+ (id)keywordForUuid:context:;
@end
