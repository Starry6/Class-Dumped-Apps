@interface AFSpeechCorrectionInfo : NSObject
@property (nonatomic) q alternativeSelectionCount;
@property (nonatomic) q characterModificationCount;
@property (nonatomic) q characterInsertionCount;
@property (nonatomic) q characterSubstitutionCount;
@property (nonatomic) q characterDeletionCount;
@property (nonatomic) NSString correctedText;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)alternativeSelectionCount;
- (void)setAlternativeSelectionCount:;
- (long long)characterModificationCount;
- (void)setCharacterModificationCount:;
- (long long)characterInsertionCount;
- (void)setCharacterInsertionCount:;
- (long long)characterDeletionCount;
- (void)setCharacterDeletionCount:;
- (long long)characterSubstitutionCount;
- (void)setCharacterSubstitutionCount:;
- (id)correctedText;
- (void)setCorrectedText:;
+ (BOOL)supportsSecureCoding;
@end
