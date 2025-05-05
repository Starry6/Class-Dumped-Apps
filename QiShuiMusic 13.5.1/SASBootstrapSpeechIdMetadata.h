@interface SASBootstrapSpeechIdMetadata : AceObject
@property (nonatomic) NSString bootstrapSpeechId;
@property (nonatomic) NSString deviceType;
@property (nonatomic) NSDate keychainCreationDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deviceType;
- (void)setDeviceType:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)bootstrapSpeechId;
- (void)setBootstrapSpeechId:;
- (id)keychainCreationDate;
- (void)setKeychainCreationDate:;
+ (id)bootstrapSpeechIdMetadata;
+ (id)bootstrapSpeechIdMetadataWithDictionary:context:;
@end
