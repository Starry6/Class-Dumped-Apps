@interface SASSetBootstrapSpeechIds : SABaseCommand
@property (nonatomic) NSArray bootstrapSpeechIdMetadata;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)bootstrapSpeechIdMetadata;
- (void)setBootstrapSpeechIdMetadata:;
+ (id)setBootstrapSpeechIds;
+ (id)setBootstrapSpeechIdsWithDictionary:context:;
@end
