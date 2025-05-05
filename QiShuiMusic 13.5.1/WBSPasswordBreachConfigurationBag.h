@interface WBSPasswordBreachConfigurationBag : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBagDictionary:;
- (id)initWithPlistData:error:;
- (id)plistDataWithFormat:;
- (void).cxx_destruct;
- (id)firstConfigurationForSupportedProtocolVersion:rampIdentifier:allowValuesForTesting:;
- (id)description;
@end
