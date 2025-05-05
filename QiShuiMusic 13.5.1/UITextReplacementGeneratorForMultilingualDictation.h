@interface UITextReplacementGeneratorForMultilingualDictation : UITextReplacementGenerator
@property (nonatomic) NSArray multilingualAlternatives;
- (void).cxx_destruct;
- (id)replacements;
- (id)multilingualAlternatives;
- (id)initWithMultilingualAlternatives:stringToReplace:replacementRange:;
@end
