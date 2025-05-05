@interface EDSearchableIndexUpdates : NSObject
@property (nonatomic) NSArray itemsRequiringIndexing;
@property (nonatomic) NSArray removedIdentifiers;
@property (nonatomic) NSArray removedDomainIdentifiers;
@property (nonatomic) BOOL hasUpdates;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (BOOL)hasUpdates;
- (id)removedDomainIdentifiers;
- (void)setRemovedIdentifiers:;
- (id)removedIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (void)setItemsRequiringIndexing:;
- (id)itemsRequiringIndexing;
- (void)setRemovedDomainIdentifiers:;
+ (id)updates;
@end
