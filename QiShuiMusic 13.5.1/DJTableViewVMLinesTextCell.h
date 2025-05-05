@interface DJTableViewVMLinesTextCell : DJTableViewVMCell
@property (nonatomic) UILabel multipleLinesLabel;
@property (nonatomic) NSArray labelVerticalConstraints;
@property (nonatomic) NSArray labelHorizontalConstraints;
@property (nonatomic) DJTableViewVMLinesTextRow rowVM;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (id)labelHorizontalConstraints;
- (id)labelVerticalConstraints;
- (id)multipleLinesLabel;
- (void)setLabelHorizontalConstraints:;
- (void)setLabelVerticalConstraints:;
- (void)setMultipleLinesLabel:;
- (void)updateLabelLayout;
- (void).cxx_destruct;
@end
