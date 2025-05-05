@interface ICStorePlatformOffer : NSObject
@property (nonatomic) NSArray assets;
@property (nonatomic) NSString buyParameters;
@property (nonatomic) NSString formattedPrice;
@property (nonatomic) NSString offerType;
@property (nonatomic) NSNumber price;
- (id)assets;
- (id)initWithResponseDictionary:;
- (id)buyParameters;
- (void).cxx_destruct;
- (id)offerType;
- (id)price;
- (id)formattedPrice;
@end
