@interface WBSPasswordEvaluator : NSObject
- (void).cxx_destruct;
- (id)evaluatePassword:;
- (id)_initWithPasswordWordListCollection:passcodeWordListCollection:;
+ (id)standardPasswordEvaluator;
+ (BOOL)passwordLooksLikeDigitOnlyPasscode:;
@end
