@interface SAIntentGroupIntentSearch : SABaseCommand
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSString jsonEncodedIntent;
@property (nonatomic) NSArray metadata;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)intent;
- (id)groupIdentifier;
- (id)metadata;
- (BOOL)requiresResponse;
- (void)setMetadata:;
- (id)encodedClassName;
- (void)setIntent:;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
+ (id)intentSearch;
+ (id)intentSearchWithDictionary:context:;
@end
