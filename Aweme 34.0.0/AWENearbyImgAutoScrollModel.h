@interface AWENearbyImgAutoScrollModel : NSObject
@property (nonatomic) UIImage showImg;
@property (nonatomic) NSString category;
@property (nonatomic) <AWENearbyCardModel> cardModel;
@property (nonatomic) BOOL showLoadingLabel;
@property (nonatomic) AWEURLModel webImgUrl;
@property (nonatomic) UIImage webImgPlaceholder;
@property (nonatomic) @? adjustUIImageView;
@property (nonatomic) @? webImgeLoadCompleted;
- (id)cardModel;
- (void)setCardModel:;
- (id)showImg;
- (BOOL)showLoadingLabel;
- (id)webImgUrl;
- (id)webImgPlaceholder;
- (id)adjustUIImageView;
- (id)webImgeLoadCompleted;
- (void)setShowImg:;
- (void)setShowLoadingLabel:;
- (void)setWebImgUrl:;
- (void)setWebImgPlaceholder:;
- (void)setAdjustUIImageView:;
- (void)setWebImgeLoadCompleted:;
- (id)category;
- (id)initWithModel:;
- (void)setCategory:;
- (void).cxx_destruct;
@end
