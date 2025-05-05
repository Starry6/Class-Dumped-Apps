@interface SSLookupItemOffer : NSObject
@property (nonatomic) NSDictionary lookupDictionary;
@property (nonatomic) NSString buyParameters;
@property (nonatomic) NSString formattedPrice;
@property (nonatomic) NSString offerType;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSString subscriptionType;
- (id)subscriptionType;
- (void)dealloc;
- (id)lookupDictionary;
- (id)actionTextForType:;
- (id)buyParameters;
- (id)offerType;
- (id)initWithLookupDictionary:;
- (id)price;
- (id)formattedPrice;
@end
