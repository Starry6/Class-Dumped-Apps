@interface SAAnswerSearch : SADomainCommand
@property (nonatomic) SALocation address;
@property (nonatomic) NSString attribute;
@property (nonatomic) NSString miscQuestion;
@property (nonatomic) NSString placeAttribute;
@property (nonatomic) NSArray product;
@property (nonatomic) NSString timeQuestion;
@property (nonatomic) NSString verbType;
- (void)setAttribute:;
- (id)attribute;
- (id)groupIdentifier;
- (void)setAddress:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)address;
- (id)product;
- (void)setProduct:;
- (id)miscQuestion;
- (void)setMiscQuestion:;
- (id)placeAttribute;
- (void)setPlaceAttribute:;
- (id)timeQuestion;
- (void)setTimeQuestion:;
- (id)verbType;
- (void)setVerbType:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
