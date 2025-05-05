@interface NSMergeConflict : NSObject
@property (nonatomic) NSManagedObject sourceObject;
@property (nonatomic) NSDictionary objectSnapshot;
@property (nonatomic) NSDictionary cachedSnapshot;
@property (nonatomic) NSDictionary persistedSnapshot;
@property (nonatomic) Q newVersionNumber;
@property (nonatomic) Q oldVersionNumber;
- (id)valueForKey:;
- (id)init;
- (void)dealloc;
- (void)_doCleanupForXPCStore:context:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)objectForKey:;
- (id)description;
- (id)initWithSource:newVersion:oldVersion:cachedSnapshot:persistedSnapshot:;
- (id)initWithSource:newVersion:oldVersion:snapshot1:snapshot2:snapshot3:;
- (id)ancestorSnapshot;
- (id)sourceObject;
- (id)objectSnapshot;
- (id)cachedSnapshot;
- (id)persistedSnapshot;
- (unsigned long long)newVersionNumber;
- (unsigned long long)oldVersionNumber;
+ (BOOL)supportsSecureCoding;
@end
