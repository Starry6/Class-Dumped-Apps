@interface SAStarkSupport : AceObject
@property (nonatomic) NSArray supportedModes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)supportedModes;
- (void)setSupportedModes:;
+ (id)starkSupport;
+ (id)starkSupportWithDictionary:context:;
@end
