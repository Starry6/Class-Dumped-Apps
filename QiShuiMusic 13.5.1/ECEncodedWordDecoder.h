@interface ECEncodedWordDecoder : NSObject
@property (nonatomic) NSData headerData;
@property (nonatomic) NSNumber stringEncoding;
@property (nonatomic) NSString language;
@property (nonatomic) q encodedWordEncoding;
@property (nonatomic) {_NSRange=QQ} encodedTextRange;
- (id)init;
- (void)setLanguage:;
- (id)language;
- (void).cxx_destruct;
- (id)headerData;
- (id)_lineSeparator;
- (id)initWithHeaderData:;
- (id)identifyRangeOfEncodedWordAtIndex:;
- (id)_encodedWordStartSequence;
- (id)_encodedWordEndSequence;
- (id)_encodedWordDelimiter;
- (id)_encodedWordLanguageDelimiter;
- (BOOL)decodeEncodedTextToData:;
- (BOOL)_decodeBEncodedTextToData:;
- (BOOL)_decodeQEncodedTextToData:;
- (void)_enumerateQByteRangesUsingBlock:;
- (id)stringEncoding;
- (void)setStringEncoding:;
- (long long)encodedWordEncoding;
- (void)setEncodedWordEncoding:;
- (id)encodedTextRange;
- (void)setEncodedTextRange:;
@end
