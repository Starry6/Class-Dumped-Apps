@interface AWEUserRecommendFollowButton : AWEUIListCellActionButton
@property (nonatomic) BOOL isConstColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsConstColor:;
- (void)updateWithFollowStatus:followerStatus:;
- (BOOL)isConstColor;
- (void)updateWithFollowStatus:followerStatus:preferredTitle:;
- (void)updateWithFollowStatus:followerStatus:preferredTitle:scene:;
- (id)initWithFrame:isConstColor:;
- (id)initWithFrame:;
- (void)setup;
@end
