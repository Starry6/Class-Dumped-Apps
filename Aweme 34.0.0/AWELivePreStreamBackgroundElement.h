@interface AWELivePreStreamBackgroundElement : AWELiveBusinessBaseElement
@property (nonatomic) BOOL hiddenliveCoverBlur;
@property (nonatomic) BOOL isAvatarBackground;
@property (nonatomic) NSDictionary blurImageParams;
@property (nonatomic) UIImageView videoPlaceholderView;
@property (nonatomic) NSArray placeholderURLList;
- (void)initializeElement;
- (void)prepareForDisPlay;
- (id)blurImageCache;
- (BOOL)isAvatarBackground;
- (void)setBlurImageParams:;
- (BOOL)hiddenliveCoverBlur;
- (void)setIsAvatarBackground:;
- (void)p_configPlaceHolderURL;
- (void)setHiddenliveCoverBlur:;
- (void)setPlaceholderURLList:;
- (id)p_vsCoverImageURLArray;
- (id)blurImageParams;
- (id)videoPlaceholderView;
- (void)setVideoPlaceholderView:;
- (id)placeholderURLList;
- (void).cxx_destruct;
- (void)reset;
@end
