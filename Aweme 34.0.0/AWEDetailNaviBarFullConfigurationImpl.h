@interface AWEDetailNaviBarFullConfigurationImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)naviBarBackgroundColor;
- (id)naviBarShareButtonImage;
- (id)naviBarCollectButtonImageForControlState:;
- (id)naviBarTitleLabelTextColor;
- (id)naviBarSubTitleLabelTextColor;
- (id)naviBarCloseButtonImage;
- (void)configureNaviBarLayout:;
- (void)updateNaviBarSubtitleWithCount:navibar:;
@end
