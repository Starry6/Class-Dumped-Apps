@interface SAPhoneAnswer : SABaseClientBoundCommand
@property (nonatomic) BOOL videoAllowed;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)videoAllowed;
- (void)setVideoAllowed:;
+ (id)answer;
+ (id)answerWithDictionary:context:;
@end
