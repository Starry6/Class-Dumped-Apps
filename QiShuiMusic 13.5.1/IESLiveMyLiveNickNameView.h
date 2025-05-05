@interface IESLiveMyLiveNickNameView : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) IESLiveCircleRollLabel nickNameLabel;
@property (nonatomic) UIImageView gradeImageView;
- (void)gradeImageClicked;
- (id)gradeImageView;
- (id)nickNameLabel;
- (void)setGradeImageView:;
- (void)setNickNameLabel:;
- (void)dealloc;
- (void)setStore:;
- (id)initWithStore:;
- (void)layoutSubviews;
- (void)setup;
- (void).cxx_destruct;
- (id)store;
@end
