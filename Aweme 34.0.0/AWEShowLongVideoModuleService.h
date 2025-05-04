@interface AWEShowLongVideoModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)showCommentMediumViewWithModel:;
+ (id)commentMediumViewWithModel:params:;
+ (void)clickCommentMediumAnchorViewWithModel:params:;
+ (void)trackClickCommentMediumAnchorViewWithModel:params:;
+ (void)trackShowCommentMediumAnchorViewWithModel:params:;
+ (BOOL)profileEntTabBottomButtonColorOptEnable;
+ (BOOL)enableLongVideoAutoPlayNextEpisode;
+ (long long)getLongVideoAutoPlayNextPreTime;
+ (BOOL)enableBlockLongVideoAutoPlayNextWithPanelShowing;
+ (BOOL)enableInsertLandScapeLVModelToFeed;
+ (BOOL)playletBottomButtonEnable;
+ (BOOL)playletCollectionBottomButtonEnable;
+ (BOOL)longVideoBottomButtonEnable;
@end
