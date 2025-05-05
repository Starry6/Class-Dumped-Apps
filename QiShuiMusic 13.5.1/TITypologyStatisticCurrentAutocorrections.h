@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic
@property (nonatomic) TIAutocorrectionList autocorrections;
@property (nonatomic) TICandidateRequestToken requestToken;
- (void).cxx_destruct;
- (id)requestToken;
- (void)setRequestToken:;
- (id)autocorrections;
- (void)setAutocorrections:;
- (void)visitRecordAutocorrections:;
@end
