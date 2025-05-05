@interface IESLiveMyLiveHonorOpenMoreView : UIView
@property (nonatomic) UILabel openLabel;
@property (nonatomic) UIImageView openIcon;
@property (nonatomic) UIView indicatorView;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) IESLiveUserCardStore store;
- (id)openIcon;
- (id)openLabel;
- (void)openMoreTapped;
- (void)setOpenIcon:;
- (void)setOpenLabel:;
- (void)setStore:;
- (id)initWithStore:;
- (BOOL)isOpen;
- (void)setIsOpen:;
- (void)setup;
- (void).cxx_destruct;
- (id)store;
- (id)indicatorView;
- (void)setIndicatorView:;
@end
