@interface IESECMallRecommendViewLoadingView : UIView
@property (nonatomic) IESECActionLoadingView loadingView;
@property (nonatomic) UILabel title;
@property (nonatomic) BOOL isBlack;
@property (nonatomic) BOOL canShowMask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBlack:;
- (void)setIsBlack:;
- (void)dismiss;
- (void)setTitle:;
- (void)show;
- (id)title;
- (void).cxx_destruct;
- (id)loadingView;
- (void)setLoadingView:;
- (BOOL)isBlack;
@end
