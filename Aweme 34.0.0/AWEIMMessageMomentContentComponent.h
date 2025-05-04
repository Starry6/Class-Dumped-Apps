@interface AWEIMMessageMomentContentComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)didTappedCover;
- (BOOL)p_needShowCloseFriendsFeed;
- (void)p_showCloseFriendsMomentDetailWithCell:messageListVC:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
