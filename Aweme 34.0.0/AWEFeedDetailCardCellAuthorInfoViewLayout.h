@interface AWEFeedDetailCardCellAuthorInfoViewLayout : NSObject
@property (nonatomic) q configType;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;
@property (nonatomic) double buttonWidth;
@property (nonatomic) {CGSize=dd} avatarImageViewSize;
@property (nonatomic) UIFont nickNameFont;
@property (nonatomic) UIFont timeLabelFont;
- (id)avatarImageViewSize;
- (void)setLeftOffset:;
- (void)setRightOffset:;
- (double)leftOffset;
- (double)rightOffset;
- (id)nickNameFont;
- (void)setNickNameFont:;
- (void)setAvatarImageViewSize:;
- (void)setTimeLabelFont:;
- (id)timeLabelFont;
- (void).cxx_destruct;
- (double)buttonWidth;
- (long long)configType;
- (void)setConfigType:;
- (void)setButtonWidth:;
+ (id)authorInfoLayoutForStablePage;
+ (id)authorInfoLayoutForRVCard;
+ (id)authorInfoLayoutWithType:;
@end
