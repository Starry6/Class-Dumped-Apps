@interface SAIntentGroupIntentSearchResponse : SABaseClientBoundCommand
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSString jsonEncodedIntent;
@property (nonatomic) NSArray metadata;
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
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
+ (id)intentSearchResponse;
+ (id)intentSearchResponseWithDictionary:context:;
@end
