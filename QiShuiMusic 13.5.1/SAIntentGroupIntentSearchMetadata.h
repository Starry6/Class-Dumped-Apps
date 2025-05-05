@interface SAIntentGroupIntentSearchMetadata : AceObject
@property (nonatomic) NSString jsonData;
@property (nonatomic) NSString metadataType;
@property (nonatomic) q version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setVersion:;
- (long long)version;
- (id)jsonData;
- (id)encodedClassName;
- (id)metadataType;
- (void)setMetadataType:;
- (void)setJsonData:;
+ (id)intentSearchMetadata;
+ (id)intentSearchMetadataWithDictionary:context:;
@end
