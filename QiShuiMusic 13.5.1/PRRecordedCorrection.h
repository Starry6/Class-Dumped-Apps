@interface PRRecordedCorrection : NSObject
@property (nonatomic) BOOL hasRecordedResponse;
- (void)dealloc;
- (id)description;
- (id)correctionResult;
- (id)initWithCorrectionResult:correctedString:;
- (id)correctedString;
- (BOOL)hasRecordedResponse;
- (void)setHasRecordedResponse:;
@end
