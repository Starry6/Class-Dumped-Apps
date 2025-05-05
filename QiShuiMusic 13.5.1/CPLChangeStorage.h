@interface CPLChangeStorage : NSObject
@property (nonatomic) NSString storageDescription;
- (id)changeWithScopedIdentifier:;
- (BOOL)getRelatedScopedIdentifier:forRecordWithScopedIdentifier:;
- (BOOL)hasChangesWithRelatedScopedIdentifier:class:;
- (id)changesWithRelatedScopedIdentifier:class:;
- (id)storageDescription;
- (BOOL)getStoredChangeType:forRecordWithScopedIdentifier:;
@end
