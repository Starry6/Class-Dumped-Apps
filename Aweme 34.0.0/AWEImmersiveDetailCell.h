@interface AWEImmersiveDetailCell : AWEAwemeDetailTableViewCell
@property (nonatomic) UIView fakeSeperator;
@property (nonatomic) double fakeSeperatorHeight;
@property (nonatomic) double cornerRadius;
- (Class)interactionControllerFactory;
- (void)replaceCurrentViewController:;
- (void)setFakeSeperatorHeight:;
- (void)refreshFakeSeperator;
- (double)fakeSeperatorHeight;
- (id)fakeSeperator;
- (void)setFakeSeperator:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)reset;
- (void)layoutSubviews;
- (void)setParentVC:;
@end
