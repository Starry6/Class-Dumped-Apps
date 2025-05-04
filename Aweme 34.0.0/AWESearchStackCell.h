@interface AWESearchStackCell : UICollectionViewCell
@property (nonatomic) UIView<AWESearchStackContentViewProtocol><AWESearchAutoPlayCardProtocol> stackContentView;
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWESearchAutoPlayHandler autoPlayHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)autoPlayHandler;
- (void)setAutoPlayHandler:;
- (id)stackContentView;
- (void)setStackContentView:;
- (void)didBecomeActive;
- (void)setIsActive:;
- (void)prepareForReuse;
- (void)didResignActive;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)layoutSubviews;
- (void)setHorizontalContentView:;
- (id)activeView;
+ (id)reuseIdentifierWithModel:;
@end
