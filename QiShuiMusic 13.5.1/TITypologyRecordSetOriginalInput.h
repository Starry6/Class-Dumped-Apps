@interface TITypologyRecordSetOriginalInput : TITypologyRecord
@property (nonatomic) NSString originalInput;
- (id)shortDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)applyToStatistic:;
- (void)setOriginalInput:;
- (id)originalInput;
+ (BOOL)supportsSecureCoding;
@end
