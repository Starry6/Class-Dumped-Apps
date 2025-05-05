@interface SSVPlatformContext : NSObject
@property (nonatomic) NSDictionary bagDictionary;
@property (nonatomic) NSString lookupURLString;
@property (nonatomic) NSString unpersonalizedLookupURLString;
@property (nonatomic) NSArray signedHeaders;
@property (nonatomic) NSArray signedQueryParameters;
@property (nonatomic) <SSVSAPContext> SAPContext;
- (id)initWithBagDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithLookupURL:unpersonalizedLookupURL:signedHeaders:signedQueryParameters:;
- (id)bagDictionary;
- (id)lookupURLString;
- (id)SAPContext;
- (void)setSAPContext:;
- (id)signedHeaders;
- (id)signedQueryParameters;
- (id)unpersonalizedLookupURLString;
@end
