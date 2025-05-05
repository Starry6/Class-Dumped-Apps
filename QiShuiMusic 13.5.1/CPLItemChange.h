@interface CPLItemChange : CPLRecordChange
@property (nonatomic) NSArray containerRelations;
- (id)init;
- (void).cxx_destruct;
- (id)containerRelations;
- (void)setContainerRelations:;
- (id)propertiesForChangeType:;
- (id)containerDescription;
- (id)containerRelationChangesComparedToRelationEnumerator:error:;
+ (BOOL)cplShouldIgnorePropertyForCoding:;
@end
