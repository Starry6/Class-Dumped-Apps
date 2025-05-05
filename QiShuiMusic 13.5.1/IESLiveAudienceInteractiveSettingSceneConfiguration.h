@interface IESLiveAudienceInteractiveSettingSceneConfiguration : NSObject
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString title;
@property (nonatomic) @? didClick;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL disabled;
@property (nonatomic) {CGSize=dd} iconSize;
- (id)didClick;
- (void)setDidClick:;
- (BOOL)selected;
- (void)setIconSize:;
- (id)iconSize;
- (void)setDisabled:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)icon;
- (void)setSelected:;
- (void)setTitle:;
- (BOOL)disabled;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
@end
