@interface AWECommentEvaluationContentElementConfig : NSObject
@property (nonatomic) NSString textSendButtonText;
@property (nonatomic) NSString textEmptyToast;
@property (nonatomic) NSString textPlaceholder;
@property (nonatomic) q textMaxLength;
@property (nonatomic) BOOL textEnableGif;
@property (nonatomic) Q textOverMaxStyle;
@property (nonatomic) Q sendButtonStyle;
@property (nonatomic) Q returnButtonStyle;
- (long long)textMaxLength;
- (BOOL)textEnableGif;
- (unsigned long long)textOverMaxStyle;
- (id)textEmptyToast;
- (unsigned long long)sendButtonStyle;
- (void)setSendButtonStyle:;
- (unsigned long long)returnButtonStyle;
- (void)setReturnButtonStyle:;
- (id)textSendButtonText;
- (void)setTextSendButtonText:;
- (void)setTextEmptyToast:;
- (void)setTextMaxLength:;
- (void)setTextEnableGif:;
- (void)setTextOverMaxStyle:;
- (void).cxx_destruct;
- (id)textPlaceholder;
- (void)setTextPlaceholder:;
@end
