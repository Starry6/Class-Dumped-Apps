@interface SAUIListenForPronunciation : SABaseClientBoundCommand
@property (nonatomic) SASPronunciationContext context;
- (id)groupIdentifier;
- (id)context;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setContext:;
+ (id)listenForPronunciation;
+ (id)listenForPronunciationWithDictionary:context:;
@end
