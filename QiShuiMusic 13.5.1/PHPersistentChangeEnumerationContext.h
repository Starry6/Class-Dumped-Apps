@interface PHPersistentChangeEnumerationContext : NSObject
@property (nonatomic) NSMutableSet untrashedIdentifiersAsInserts;
@property (nonatomic) NSMutableSet trashedIdentifiersAsDeletes;
- (id)init;
- (void).cxx_destruct;
- (id)untrashedIdentifiersAsInserts;
- (id)trashedIdentifiersAsDeletes;
@end
