@interface AWECommonLinkAreaView : UIView
@property (nonatomic) NSArray linkList;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) double hitTestBottomExpand;
- (id)linkList;
- (void)setLinkList:;
- (void)linkLabelClicked:;
- (double)hitTestBottomExpand;
- (void)setHitTestBottomExpand:;
- (double)configWithContext:;
- (id)__iconNameForItemType:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
@end
