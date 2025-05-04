@interface AWEUserRecommendBigCardModel : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSArray itemList;
@property (nonatomic) UIColor avatarTopDominantColor;
@property (nonatomic) UIColor avatarBottomDominantColor;
@property (nonatomic) BOOL shouldShowAvatar;
@property (nonatomic) Q addButtonType;
- (BOOL)shouldShowAvatar;
- (void)setShouldShowAvatar:;
- (unsigned long long)addButtonType;
- (id)avatarTopDominantColor;
- (id)avatarBottomDominantColor;
- (void)setAddButtonType:;
- (void)setAvatarTopDominantColor:;
- (void)setAvatarBottomDominantColor:;
- (id)user;
- (void)setUser:;
- (id)initWithUser:;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
@end
