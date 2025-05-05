@interface IESLiveSaaSStackView : UIStackView
@property (nonatomic) @? willUpdateConstraintsBlock;
@property (nonatomic) @? didUpdateConstraintsBlock;
- (id)didUpdateConstraintsBlock;
- (void)setDidUpdateConstraintsBlock:;
- (void)setWillUpdateConstraintsBlock:;
- (id)willUpdateConstraintsBlock;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (void)updateConstraints;
@end
