@interface ISPersonalizeOffersRequest : NSObject
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSArray allItemTypes;
- (id)initWithItems:;
- (void)dealloc;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (id)copyWithZone:;
- (void)addItemIdentifier:forItemType:;
- (id)allItemTypes;
- (id)itemIdentifiersForItemType:;
@end
