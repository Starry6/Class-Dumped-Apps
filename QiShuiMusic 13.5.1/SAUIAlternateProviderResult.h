@interface SAUIAlternateProviderResult : SADomainObject
@property (nonatomic) NSArray commands;
@property (nonatomic) NSNumber numberOfResults;
@property (nonatomic) SAUIImageResource providerImage;
@property (nonatomic) NSString providerName;
- (id)groupIdentifier;
- (id)commands;
- (void)setProviderName:;
- (id)providerName;
- (id)encodedClassName;
- (void)setCommands:;
- (id)numberOfResults;
- (void)setNumberOfResults:;
- (id)providerImage;
- (void)setProviderImage:;
+ (id)alternateProviderResult;
+ (id)alternateProviderResultWithDictionary:context:;
@end
