@interface PRTypologyRecord : NSObject
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addCandidate:;
- (id)initWithString:offset:range:languageObject:languages:topLanguages:autocorrect:initialCapitalize:autocapitalize:keyEventArray:appIdentifier:selectedRangeValue:;
- (void)addCorrection:;
- (void)closeTypologyRecordWithResults:;
+ (id)openTypologyRecordWithString:range:languageObject:languages:topLanguages:autocorrect:initialCapitalize:autocapitalize:keyEventArray:appIdentifier:selectedRangeValue:;
+ (id)currentTypologyRecord;
+ (void)writeTypologyRecords;
+ (void)resetTypologyRecords;
+ (void)setTypologyRecordsLimit:;
@end
