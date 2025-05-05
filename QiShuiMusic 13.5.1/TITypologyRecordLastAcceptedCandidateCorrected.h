@interface TITypologyRecordLastAcceptedCandidateCorrected : TITypologyRecord
- (id)shortDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)applyToStatistic:;
+ (BOOL)supportsSecureCoding;
@end
