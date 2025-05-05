@interface TIKeyboardConfiguration : NSObject
@property (nonatomic) TIKeyboardInputManagerState inputManagerState;
@property (nonatomic) TIKeyboardIntermediateText intermediateText;
@property (nonatomic) NSString layoutTag;
@property (nonatomic) NSString accentKeyString;
@property (nonatomic) BOOL assertDefaultKeyPlane;
@property (nonatomic) NSArray multilingualLanguages;
- (void)setInputManagerState:;
- (BOOL)assertDefaultKeyPlane;
- (id)inputManagerState;
- (id)accentKeyString;
- (id)initWithCoder:;
- (void)setLayoutTag:;
- (void)setAccentKeyString:;
- (id)layoutTag;
- (void)encodeWithCoder:;
- (void)setAssertDefaultKeyPlane:;
- (void).cxx_destruct;
- (void)setIntermediateText:;
- (id)multilingualLanguages;
- (void)setMultilingualLanguages:;
- (id)intermediateText;
+ (BOOL)supportsSecureCoding;
@end
