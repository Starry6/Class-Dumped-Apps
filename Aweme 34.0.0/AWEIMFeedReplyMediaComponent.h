@interface AWEIMFeedReplyMediaComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateAssetActionWithCid:assetId:assetModel:cacheModel:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)didTappedCover;
- (void)p_showCloseFriendsMomentDetail;
- (BOOL)p_shouldShowCollapseMediaControllerWithCell:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
