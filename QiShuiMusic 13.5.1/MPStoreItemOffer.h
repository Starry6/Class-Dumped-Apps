@interface MPStoreItemOffer : NSObject
@property (nonatomic) NSArray assets;
@property (nonatomic) NSString buyParameters;
@property (nonatomic) NSString formattedPrice;
@property (nonatomic) NSString offerType;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSDictionary lookupDictionary;
- (id)assets;
- (id)lookupDictionary;
- (id)initWithCoder:;
- (id)actionTextForType:;
- (unsigned long long)hash;
- (id)buyParameters;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)offerType;
- (id)initWithLookupDictionary:;
- (id)price;
- (id)formattedPrice;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
