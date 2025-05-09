@interface AFSpeechToken : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString phoneSequence;
@property (nonatomic) NSString ipaPhoneSequence;
@property (nonatomic) q confidenceScore;
@property (nonatomic) double startTime;
@property (nonatomic) double silenceStartTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) BOOL removeSpaceAfter;
- (void)setText:;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)startTime;
- (double)endTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)text;
- (BOOL)isEqual:;
- (BOOL)removeSpaceBefore;
- (BOOL)removeSpaceAfter;
- (long long)confidenceScore;
- (void)setRemoveSpaceBefore:;
- (void)setConfidenceScore:;
- (id)aceToken;
- (id)phoneSequence;
- (void)setPhoneSequence:;
- (id)ipaPhoneSequence;
- (void)setIpaPhoneSequence:;
- (double)silenceStartTime;
- (void)setSilenceStartTime:;
- (void)setRemoveSpaceAfter:;
+ (BOOL)supportsSecureCoding;
@end
