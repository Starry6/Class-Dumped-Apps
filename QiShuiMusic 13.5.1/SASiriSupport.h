@interface SASiriSupport : AceObject
@property (nonatomic) NSString authToken;
@property (nonatomic) NSArray endpoints;
@property (nonatomic) NSArray useCases;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEndpoints:;
- (id)authToken;
- (void)setAuthToken:;
- (id)endpoints;
- (id)groupIdentifier;
- (void)setUseCases:;
- (id)useCases;
- (id)encodedClassName;
+ (id)siriSupport;
+ (id)siriSupportWithDictionary:context:;
@end
