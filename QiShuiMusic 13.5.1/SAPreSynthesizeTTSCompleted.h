@interface SAPreSynthesizeTTSCompleted : SABaseCommand
@property (nonatomic) NSArray approximateSpeechDuration;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)approximateSpeechDuration;
- (void)setApproximateSpeechDuration:;
+ (id)preSynthesizeTTSCompleted;
+ (id)preSynthesizeTTSCompletedWithDictionary:context:;
@end
