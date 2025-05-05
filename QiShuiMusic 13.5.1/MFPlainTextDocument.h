@interface MFPlainTextDocument : NSObject
- (id)string;
- (unsigned long long)fragmentCount;
- (void).cxx_destruct;
- (void)getFormatFlowedString:insertedTrailingSpaces:encoding:;
- (id)quotedString:;
- (void)appendString:withQuoteLevel:;
- (void)getString:quoteLevel:ofFragmentAtIndex:;
- (id)archivedRepresentation;
- (void)appendArchivedRepresentation:;
@end
