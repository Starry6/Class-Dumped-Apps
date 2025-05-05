@interface ISTouchIDDialog : ISDialog
@property (nonatomic) NSString body;
@property (nonatomic) NSString username;
@property (nonatomic) BOOL isFree;
@property (nonatomic) BOOL isDualAction;
@property (nonatomic) NSString fallbackExplanation;
@property (nonatomic) NSString fallbackMessage;
- (id)username;
- (id)body;
- (void)setUsername:;
- (void)setBody:;
- (void).cxx_destruct;
- (void)_init;
- (id)paymentSheet;
- (BOOL)isDualAction;
- (id)initWithDialogDictionary:;
- (void)setFallbackMessage:;
- (id)fallbackMessage;
- (id)fallbackExplanation;
- (void)setFallbackExplanation:;
- (id)buttonForButtonType:;
- (void)_parseDialogDictionary:;
- (BOOL)isFree;
- (void)setIsFree:;
@end
