@interface VKTextInputStringTokenizer : UITextInputStringTokenizer
@property (nonatomic) VKCTextRecognitionResult recognitionResult;
- (BOOL)isPosition:atBoundary:inDirection:;
- (id)rangeEnclosingPosition:withGranularity:inDirection:;
- (BOOL)isPosition:withinTextUnit:inDirection:;
- (void)setRecognitionResult:;
- (id)positionFromPosition:toBoundary:inDirection:;
- (void).cxx_destruct;
- (id)recognitionResult;
- (id)initWithTextInput:recognitionResult:;
@end
