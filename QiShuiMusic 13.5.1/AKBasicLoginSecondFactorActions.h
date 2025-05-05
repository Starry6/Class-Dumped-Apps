@interface AKBasicLoginSecondFactorActions : NSObject
@property (nonatomic) @? regenerateCodeAction;
@property (nonatomic) @? codeEnteredAction;
@property (nonatomic) @? ak_cancelAction;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)ak_cancelAction;
- (void)setAk_cancelAction:;
- (id)regenerateCodeAction;
- (void)setRegenerateCodeAction:;
- (id)codeEnteredAction;
- (void)setCodeEnteredAction:;
@end
