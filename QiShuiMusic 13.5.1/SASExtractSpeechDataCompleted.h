@interface SASExtractSpeechDataCompleted : SADomainCommand
@property (nonatomic) NSData speechData;
@property (nonatomic) NSString speechDataUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)speechData;
- (void)setSpeechData:;
- (id)speechDataUrl;
- (void)setSpeechDataUrl:;
+ (id)extractSpeechDataCompleted;
+ (id)extractSpeechDataCompletedWithDictionary:context:;
@end
