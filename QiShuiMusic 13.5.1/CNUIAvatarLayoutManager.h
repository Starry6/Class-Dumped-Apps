@interface CNUIAvatarLayoutManager : NSObject
+ (void)cropAvatarBadgeLayer:withCropStyle:;
+ (id)avatarBadgeRectForAvatarInRect:badgeType:isRTL:;
+ (long long)maxAvatarCountForType:;
+ (id)avatarViewLayoutConfigurationsForType:;
+ (id)frameForBadgeWithFrame:onAvatarFrame:withPosition:mediaContextFrame:isRTL:;
+ (id)layoutConfigurationsForType:withItemCount:;
+ (id)avatarViewLayoutConfigurationsDictionaryForType:;
+ (id)avatarViewLayoutItemConfigurations:;
+ (id)identifierForLayoutType:;
+ (id)avatarBadgeLayerForAvatarInRect:badgeType:isRTL:;
+ (void)applyAvatarBadgeStylingToLayer:badgeType:;
@end
