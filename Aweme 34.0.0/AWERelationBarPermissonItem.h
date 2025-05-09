@interface AWERelationBarPermissonItem : NSObject
@property (nonatomic) # cellClass;
@property (nonatomic) NSString title;
@property (nonatomic) NSString toast;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) BOOL shouldHideLineView;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL controlEnabled;
@property (nonatomic) NSNumber danmakuPermission;
@property (nonatomic) NSNumber commentProtectionMode;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSNumber duetPermission;
@property (nonatomic) NSNumber commentPermission;
@property (nonatomic) NSString introText;
@property (nonatomic) BOOL selectedState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)commentProtectionMode;
- (void)setCommentProtectionMode:;
- (BOOL)shouldHideLineView;
- (BOOL)controlEnabled;
- (void)setShouldHideLineView:;
- (id)danmakuPermission;
- (void)setDanmakuPermission:;
- (void)setControlEnabled:;
- (BOOL)switcherState;
- (void)setSwitcherState:;
- (void)onSwitherToggled:withCompletion:;
- (void)postDownloadPermissionSetting:withCompletion:;
- (id)iconImage;
- (void)setIconImage:;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setToast:;
- (id)toast;
- (void)setCellClass:;
@end
