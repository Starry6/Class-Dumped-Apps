@interface PKMentionQuery : PKDetectionQuery
@property (nonatomic) NSSet validSuffixes;
- (id)initWithRecognitionSessionManager:;
- (void)queryDidUpdateResult:;
- (void)setValidSuffixes:;
- (id)validSuffixes;
@end
