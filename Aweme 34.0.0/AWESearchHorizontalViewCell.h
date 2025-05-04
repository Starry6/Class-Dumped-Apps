@interface AWESearchHorizontalViewCell : UICollectionViewCell
@property (nonatomic) NSString reuseIdentifer;
@property (nonatomic) UIView<AWESearchHorizontalViewCellProtocol><AWESearchAutoPlayCardProtocol> horizontalContentView;
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWESearchAutoPlayHandler autoPlayHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)autoPlayHandler;
- (void)setAutoPlayHandler:;
- (id)reuseIdentifer;
- (void)setReuseIdentifer:;
- (void)didBecomeActive;
- (void)setIsActive:;
- (void)prepareForReuse;
- (void)didResignActive;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)layoutSubviews;
- (id)horizontalContentView;
- (void)setHorizontalContentView:;
- (id)activeView;
+ (id)reuseIdentiferWithModel:;
@end
