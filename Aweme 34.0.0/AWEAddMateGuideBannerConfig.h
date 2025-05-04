@interface AWEAddMateGuideBannerConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString buttonText;
@property (nonatomic) UIImage icon;
@property (nonatomic) q exitDisplayCount;
@property (nonatomic) q displayMaxFriendCount;
- (long long)exitDisplayCount;
- (void)setExitDisplayCount:;
- (long long)displayMaxFriendCount;
- (void)setDisplayMaxFriendCount:;
- (id)subtitle;
- (id)icon;
- (void)setSubtitle:;
- (id)buttonText;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setButtonText:;
@end
