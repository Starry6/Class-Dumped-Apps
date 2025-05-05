@interface CNVisualIdentityAvatarLayoutManager : NSObject
@property (nonatomic) NSArray avatarViewAdHocLayoutConfiguration;
@property (nonatomic) NSArray avatarViewLayoutConfiguration;
@property (nonatomic) q maxAvatarCount;
@property (nonatomic) NSArray avatarLayerItems;
@property (nonatomic) CNAvatarAccessoryView mediaContextBadge;
- (id)init;
- (void).cxx_destruct;
- (void)setMediaContextBadge:;
- (id)mediaContextBadge;
- (id)avatarFrameForFocusedAvatarInView:;
- (void)updateAvatarLayersForItemCount:inView:;
- (void)updateAvatarLayersForItemCount:inView:withLayoutType:;
- (void)updateLayer:forItemCount:atIndex:inView:withLayoutType:;
- (BOOL)hasMediaContextBadge;
- (void)updateAvatarLayersWithPrimaryAvatarForItemCount:inView:;
- (id)adHocAvatarFrameInView:forItemCount:;
- (id)adHocAvatarFrameInBounds:forItemCount:;
- (id)avatarFrameInBounds:forItemCount:;
- (id)avatarFrameInBounds:forItemCount:withConfiguration:;
- (id)layoutConfigurationForIndex:inItemCount:withLayoutType:;
- (long long)maxAvatarCount;
- (id)avatarLayerItems;
- (void)setAvatarLayerItems:;
- (id)avatarViewAdHocLayoutConfiguration;
- (void)setAvatarViewAdHocLayoutConfiguration:;
- (id)avatarViewLayoutConfiguration;
- (void)setAvatarViewLayoutConfiguration:;
@end
