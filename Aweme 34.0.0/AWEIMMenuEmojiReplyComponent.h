@interface AWEIMMenuEmojiReplyComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowItemWithMessage:context:;
- (id)menuItemTitle:context:;
- (id)menuItemImageName:context:;
- (id)menuTrackerName:context:;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:context:;
- (id)menuItemLightImageURL:context:;
- (id)menuItemDarkImageURL:context:;
- (BOOL)p_isLiked:;
@end
