@interface UITextSuggestionWithAction : UITextSuggestion
@property (nonatomic) @ target;
@property (nonatomic) : action;
- (SEL)action;
- (void)setAction:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)performActionWihSender:;
@end
