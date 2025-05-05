@interface AMSLookupItemOffer : NSObject
@property (nonatomic) NSString buyParameters;
@property (nonatomic) NSString formattedPrice;
@property (nonatomic) NSDictionary lookupDictionary;
@property (nonatomic) NSString offerType;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSString subscriptionType;
- (id)subscriptionType;
- (id)lookupDictionary;
- (id)actionTextForType:;
- (id)buyParameters;
- (void).cxx_destruct;
- (id)offerType;
- (id)initWithLookupDictionary:;
- (id)price;
- (id)formattedPrice;
@end
