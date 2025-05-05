@interface TITypologyRecordReplacements : TITypologyRecord
@property (nonatomic) NSString string;
@property (nonatomic) TIKeyboardLayout keyLayout;
@property (nonatomic) NSArray candidates;
- (id)string;
- (id)shortDescription;
- (id)candidates;
- (void)setString:;
- (void)setCandidates:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)keyLayout;
- (void)setKeyLayout:;
- (void)applyToStatistic:;
+ (BOOL)supportsSecureCoding;
@end
