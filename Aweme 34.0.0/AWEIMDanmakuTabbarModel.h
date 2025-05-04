@interface AWEIMDanmakuTabbarModel : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSString title;
@property (nonatomic) q unReadCount;
@property (nonatomic) UIImage tailingImage;
@property (nonatomic) {CGSize=dd} tailingImageSize;
@property (nonatomic) BOOL isDefaultSelected;
@property (nonatomic) BOOL hideUnreadDot;
@property (nonatomic) NSString tabTrackName;
- (void)setTabTrackName:;
- (void)setIsDefaultSelected:;
- (BOOL)hideUnreadDot;
- (id)tabTrackName;
- (long long)unReadCount;
- (id)tailingImage;
- (id)tailingImageSize;
- (void)setUnReadCount:;
- (void)setTailingImage:;
- (void)setTailingImageSize:;
- (BOOL)isDefaultSelected;
- (void)setHideUnreadDot:;
- (long long)state;
- (void).cxx_destruct;
- (id)title;
- (void)setState:;
- (void)setTitle:;
@end
