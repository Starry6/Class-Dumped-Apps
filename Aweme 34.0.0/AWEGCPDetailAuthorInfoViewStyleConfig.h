@interface AWEGCPDetailAuthorInfoViewStyleConfig : NSObject
@property (nonatomic) double avatarImageSize;
@property (nonatomic) UIFont nickNameFont;
@property (nonatomic) double liveMarkViewSize;
- (id)nickNameFont;
- (void)setAvatarImageSize:;
- (void)setNickNameFont:;
- (void)setLiveMarkViewSize:;
- (double)liveMarkViewSize;
- (void).cxx_destruct;
- (double)avatarImageSize;
+ (id)defaultStyleConfig;
+ (id)newStrategyStyleConfig;
@end
