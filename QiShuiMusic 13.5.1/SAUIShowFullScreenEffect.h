@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand
@property (nonatomic) NSString fullScreenEffectType;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)fullScreenEffectType;
- (void)setFullScreenEffectType:;
+ (id)showFullScreenEffect;
+ (id)showFullScreenEffectWithDictionary:context:;
@end
