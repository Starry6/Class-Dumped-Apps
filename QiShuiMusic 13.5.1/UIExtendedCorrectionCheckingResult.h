@interface UIExtendedCorrectionCheckingResult : NSCorrectionCheckingResult
- (id)detail;
- (void).cxx_destruct;
- (id)initWithRange:replacementString:sentenceRange:detail:;
- (id)sentenceRange;
- (BOOL)isPostEditingResult;
@end
