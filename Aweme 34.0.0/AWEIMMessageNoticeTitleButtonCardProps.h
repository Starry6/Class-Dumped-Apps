@interface AWEIMMessageNoticeTitleButtonCardProps : AWEIMUIViewPresenterProps
@property (nonatomic) {CGSize=dd} iconSize;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) AWEIMUIImageViewPresenterProps iconProps;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setIconProps:;
- (id)iconProps;
- (id)init;
- (id)subtitle;
- (void)setIconSize:;
- (void)setSubtitle:;
- (id)iconSize;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)buttonTitle;
- (void)setButtonTitle:;
@end
