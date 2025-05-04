@interface AWEHPTopTabMaskFeedController : AWEBaseController
@property (nonatomic) AWEAwemeModel curDisplayAweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldHideCellViewControllerTopGradientView:;
- (void)p_updateChannelTopMaskWithAweme:;
- (BOOL)p_needReplacePlayerMask;
- (id)curDisplayAweme;
- (void)setCurDisplayAweme:;
- (BOOL)p_needHideChannelMaskWithAweme:;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
@end
