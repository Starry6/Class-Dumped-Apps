@interface BMPBSiriDictationEvent : PBCodable
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasRecognizedText;
@property (nonatomic) NSString recognizedText;
@property (nonatomic) BOOL hasCorrectedText;
@property (nonatomic) NSString correctedText;
- (void)setAbsoluteTimestamp:;
- (void)setHasAbsoluteTimestamp:;
- (BOOL)hasAbsoluteTimestamp;
- (void)writeTo:;
- (double)absoluteTimestamp;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)correctedText;
- (void)setCorrectedText:;
- (BOOL)hasRecognizedText;
- (BOOL)hasCorrectedText;
- (id)recognizedText;
- (void)setRecognizedText:;
@end
