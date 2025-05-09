@interface AWEBlockHideDislikeCountResponse : AWEBaseApiModel
@property (nonatomic) AWEPrivateListSettingsModel blockListSettings;
@property (nonatomic) AWEPrivateListSettingsModel hideMyPostSettings;
@property (nonatomic) AWEPrivateListSettingsModel hideHerPostSettings;
@property (nonatomic) AWEPrivateListSettingsModel recentlyDislikeListSettings;
@property (nonatomic) AWEPrivateListSettingsModel notShow24StoryListSettings;
@property (nonatomic) AWEPrivateListSettingsModel notSee24StoryListSettings;
@property (nonatomic) AWEPrivateListSettingsModel notShowInclude24storyListSettings;
@property (nonatomic) AWEPrivateListSettingsModel notSeeInclude24storyListSettings;
- (id)blockListSettings;
- (void)setBlockListSettings:;
- (id)hideMyPostSettings;
- (void)setHideMyPostSettings:;
- (id)hideHerPostSettings;
- (void)setHideHerPostSettings:;
- (id)recentlyDislikeListSettings;
- (void)setRecentlyDislikeListSettings:;
- (id)notShow24StoryListSettings;
- (void)setNotShow24StoryListSettings:;
- (id)notSee24StoryListSettings;
- (void)setNotSee24StoryListSettings:;
- (id)notShowInclude24storyListSettings;
- (void)setNotShowInclude24storyListSettings:;
- (id)notSeeInclude24storyListSettings;
- (void)setNotSeeInclude24storyListSettings:;
- (void).cxx_destruct;
+ (id)blockListSettingsJSONTransformer;
+ (id)hideMyPostSettingsJSONTransformer;
+ (id)recentlyDislikeListSettingsJSONTransformer;
+ (id)notShow24StoryListSettingsJSONTransformer;
+ (id)notSee24StoryListSettingsJSONTransformer;
+ (id)notShowInclude24storyListSettingsJSONTransformer;
+ (id)notSeeInclude24storyListSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
