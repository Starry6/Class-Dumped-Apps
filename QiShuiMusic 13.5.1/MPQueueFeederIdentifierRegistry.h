@interface MPQueueFeederIdentifierRegistry : NSObject
@property (nonatomic) NSMutableArray identifiers;
@property (nonatomic) NSMutableArray identifierSets;
@property (nonatomic) NSMapTable index;
@property (nonatomic) q count;
- (id)init;
- (id)identifiers;
- (id)initWithCoder:;
- (id)identifierSets;
- (id)index;
- (void)encodeWithCoder:;
- (void)setIdentifierSets:;
- (void)setIdentifiers:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)description;
- (id)itemAtIndex:;
- (long long)count;
- (id)copyWithZone:;
- (long long)indexForItem:;
- (void)replaceItemAndIdentifierSet:atIndex:;
- (void)applyChanges:identifierSetLookupBlock:;
- (id)identifierSetAtIndex:;
- (id)identifierSetForItem:;
- (id)itemForIdentifierSet:;
+ (BOOL)supportsSecureCoding;
@end
