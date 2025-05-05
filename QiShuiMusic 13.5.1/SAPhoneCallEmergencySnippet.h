@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet
@property (nonatomic) SAUIColor bodyBackgroundColor;
@property (nonatomic) SAUIColor bodyTextColor;
@property (nonatomic) q countDownSeconds;
@property (nonatomic) SAUIColor headerBackgroundColor;
@property (nonatomic) SAUIColor headerTextColor;
- (id)groupIdentifier;
- (id)headerBackgroundColor;
- (id)encodedClassName;
- (void)setHeaderBackgroundColor:;
- (void)setHeaderTextColor:;
- (id)headerTextColor;
- (id)bodyBackgroundColor;
- (void)setBodyBackgroundColor:;
- (id)bodyTextColor;
- (void)setBodyTextColor:;
- (long long)countDownSeconds;
- (void)setCountDownSeconds:;
+ (id)callEmergencySnippet;
+ (id)callEmergencySnippetWithDictionary:context:;
@end
