@interface UIDictationConnectionCorrectionInfo : NSObject
@property (nonatomic) NSInteger alternativeSelectionCount;
@property (nonatomic) NSInteger characterModificationCount;
@property (nonatomic) NSInteger characterInsertionCount;
@property (nonatomic) NSInteger characterDeletionCount;
@property (nonatomic) NSInteger characterSubstitutionCount;
@property (nonatomic) NSString correctedText;
- (void).cxx_destruct;
- (int)alternativeSelectionCount;
- (void)setAlternativeSelectionCount:;
- (int)characterModificationCount;
- (void)setCharacterModificationCount:;
- (int)characterInsertionCount;
- (void)setCharacterInsertionCount:;
- (int)characterDeletionCount;
- (void)setCharacterDeletionCount:;
- (int)characterSubstitutionCount;
- (void)setCharacterSubstitutionCount:;
- (id)correctedText;
- (void)setCorrectedText:;
@end
