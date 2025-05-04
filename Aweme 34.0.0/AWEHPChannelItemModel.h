@interface AWEHPChannelItemModel : NSObject
@property (nonatomic) q itemType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString indicatorColor;
@property (nonatomic) AWEHPTopTabLottieParams lottie;
@property (nonatomic) @? lottieShowBlock;
@property (nonatomic) @? lottieExitBlock;
- (id)lottie;
- (void)setLottie:;
- (void)setLottieShowBlock:;
- (void)setLottieExitBlock:;
- (id)lottieShowBlock;
- (id)lottieExitBlock;
- (long long)itemType;
- (void)setItemType:;
- (id)init;
- (id)indicatorColor;
- (id)description;
- (void)setIndicatorColor:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
@end
