@interface ECEncodedWordEncoder : NSObject
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSString language;
@property (nonatomic) NSString string;
@property (nonatomic) NSString characterSet;
@property (nonatomic) q encodedWordEncoding;
@property (nonatomic) NSData decodedText;
@property (nonatomic) Q singleEncodedWordLength;
@property (nonatomic) Q minimumLengthOfEncodedWord;
- (id)characterSet;
- (id)string;
- (id)init;
- (id)language;
- (void).cxx_destruct;
- (id)description;
- (void)setCharacterSet:;
- (unsigned long long)stringEncoding;
- (long long)encodedWordEncoding;
- (void)setEncodedWordEncoding:;
- (id)initWithString:stringEncoding:language:;
- (unsigned long long)minimumLengthOfEncodedWord;
- (void)_prepareForEncoding;
- (unsigned long long)encodeToHeaderData:currentLineLength:;
- (unsigned long long)_writeEncodedWordPreambleToBuffer:length:;
- (unsigned long long)_bEncodeToHeaderData:currentLineLength:;
- (unsigned long long)_qEncodeToHeaderData:currentLineLength:;
- (BOOL)_getBytesWithoutSplittingComposedCharacters:targetQEncodedTextLength:usedLength:splitComposedCharacterSequence:usedQEncodedTextLength:extraLength:extraQEncodedTextLength:fromString:stringEncoding:range:remainingRange:;
- (unsigned long long)_lengthOfQEncodedTextForBytes:length:;
- (void)_writeQEncodedTextAndEndSequenceToHeaderBytes:fromDecodedBytes:length:;
- (id)_findNextByteThatNeedsQEncodingBetweenStartByte:endByte:;
- (id)decodedText;
- (void)setDecodedText:;
- (unsigned long long)singleEncodedWordLength;
- (void)setSingleEncodedWordLength:;
@end
