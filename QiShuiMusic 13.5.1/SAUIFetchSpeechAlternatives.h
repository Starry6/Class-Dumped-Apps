@interface SAUIFetchSpeechAlternatives : SABaseCommand
@property (nonatomic) NSString requestId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)requestId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setRequestId:;
+ (id)fetchSpeechAlternatives;
+ (id)fetchSpeechAlternativesWithDictionary:context:;
@end
