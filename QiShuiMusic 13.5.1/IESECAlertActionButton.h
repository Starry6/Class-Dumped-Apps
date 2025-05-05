@interface IESECAlertActionButton : UIButton
@property (nonatomic) UIView topSeparator;
@property (nonatomic) UIView leftSeparator;
@property (nonatomic) BOOL dismissWhenClicked;
- (BOOL)dismissWhenClicked;
- (void)setDismissWhenClicked:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)topSeparator;
- (void)setTopSeparator:;
- (id)leftSeparator;
- (void)setLeftSeparator:;
+ (id)separatorViewWithFrame:;
@end
