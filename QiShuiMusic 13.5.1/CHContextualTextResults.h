@interface CHContextualTextResults : NSObject
@property (nonatomic) NSArray textResults;
- (void).cxx_destruct;
- (id)topTranscription;
- (id)initWithTextResults:;
- (id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:intersectionRanges:;
- (id)textResults;
- (void)setTextResults:;
@end
