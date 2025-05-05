@interface OBStackedIconTextList : UIStackView
@property (nonatomic) double iconTextPadding;
@property (nonatomic) Q dataDetectorTypes;
- (void)setDataDetectorTypes:;
- (unsigned long long)dataDetectorTypes;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setIconTextPadding:;
- (void)addEntryWithIcon:iconSize:text:;
- (void)addEntryWithIcon:iconSize:attributedText:;
- (double)iconTextPadding;
@end
