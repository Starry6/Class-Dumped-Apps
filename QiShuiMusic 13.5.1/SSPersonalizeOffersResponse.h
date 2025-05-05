@interface SSPersonalizeOffersResponse : NSObject
@property (nonatomic) NSArray personalizedItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)actionDisplayNameForItemType:;
- (id)personalizedItems;
- (id)priceDisplayForItemType:;
- (id)actionParametersForItemIdentifier:;
- (void)setActionDisplayNameString:forItemType:;
- (void)setActionParameters:forItemIdentifier:;
- (void)setPriceDisplayString:forItemType:;
- (void)_setPersonalizedItems:;
@end
