@interface ICStorePlatformResponseGroup : NSObject
@property (nonatomic) NSArray allItems;
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSNumber enqueuerAccountIdentifier;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString storefrontIdentifier;
@property (nonatomic) @ rawResponse;
@property (nonatomic) NSArray performanceMetrics;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allItems;
- (id)accountIdentifier;
- (id)initWithResponses:;
- (id)rawResponse;
- (id)itemForIdentifier:;
- (id)expirationDate;
- (id)performanceMetrics;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (void)enumerateItemsUsingBlock:;
- (id)enqueuerAccountIdentifier;
- (id)copyWithZone:;
@end
