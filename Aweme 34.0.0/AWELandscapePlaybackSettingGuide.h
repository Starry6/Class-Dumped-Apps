@interface AWELandscapePlaybackSettingGuide : AWELandscapeBaseGuide
@property (nonatomic) DUXPopover popover;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (id)initWithTargetView:model:context:;
- (void)setModel:;
- (BOOL)show;
- (long long)priority;
- (id)identifier;
- (void)dismiss;
- (id)model;
- (id)popover;
- (void)setData:;
- (void).cxx_destruct;
- (void)setPopover:;
+ (BOOL)guideHasShow;
+ (void)setGuideHasShow:;
@end
