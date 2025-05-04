@interface AWECommentInputViewSendButtonConfigModel : NSObject
@property (nonatomic) NSString sendButtonText;
@property (nonatomic) Q showTimingStyle;
@property (nonatomic) Q sendButtonStyle;
@property (nonatomic) Q returnButtonStyle;
- (unsigned long long)showTimingStyle;
- (id)sendButtonText;
- (unsigned long long)sendButtonStyle;
- (void)setSendButtonStyle:;
- (unsigned long long)returnButtonStyle;
- (void)setReturnButtonStyle:;
- (void)setSendButtonText:;
- (void)setShowTimingStyle:;
- (void).cxx_destruct;
@end
