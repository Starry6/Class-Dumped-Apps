@interface AWENoticeFollowButton : AWEUIListCellActionButton
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTitle:icon:padding:requiresAttention:;
- (void)updateWithFollowStatus:followerStatus:;
- (void)updateWithFollowStatus:followerStatus:preferredTitle:secUid:;
- (void)setupColorMode;
- (void)updateEdgeInsets:;
- (void)updateWithFollowStatus:followerStatus:preferredTitle:;
- (id)initWithFrame:;
+ (double)preferredButtonWidth;
@end
