@interface AWEDCFeedCellCreationInfoElement : AWEDCFeedBaseCellElement
@property (nonatomic) AWEDCFeedCreationUserAvatarResource avatarResource;
@property (nonatomic) AWEDCFeedCreationUserNameResource nameResource;
@property (nonatomic) AWEDCFeedCreationDiggResource diggResource;
@property (nonatomic) UIView rightResourceView;
@property (nonatomic) NSMutableArray resourceArray;
- (void)configWithModel:context:;
- (void)themeDidChange:;
- (id)classNameWithReferString;
- (id)diggResource;
- (void)addDiggViewIfNeededWithConfig:model:;
- (void)addCustomViewIfNeededWithConfig:;
- (void)setDiggResource:;
- (id)rightResourceView;
- (id)resourceArray;
- (void)setResourceArray:;
- (void)configAvatarResourceWithModel:;
- (void)configNameResourceWithModel:;
- (void)configResourcePlaceWithModel:;
- (BOOL)shouldHiddenResourceWithType:;
- (id)avatarResource;
- (id)nameResource;
- (void)setRightResourceView:;
- (void)setAvatarResource:;
- (void)setNameResource:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)canShowWithAwemeModel:context:;
+ (double)heightWithCellWidth:awemeModel:context:;
+ (long long)elementStyle;
@end
