@interface IESECStoreNavbarViewModel : NSObject
@property (nonatomic) IESECShopInfoResponse infoResponse;
@property (nonatomic) BOOL showSearchButton;
@property (nonatomic) NSString searchHint;
@property (nonatomic) NSString serviceURL;
@property (nonatomic) NSString shoppingCartURL;
@property (nonatomic) NSString orderURL;
@property (nonatomic) NSString redpacketURL;
@property (nonatomic) IESECShopTopSearchInfoModel topSearchInfo;
@property (nonatomic) UIColor searchBarTextColor;
@property (nonatomic) UIColor searchBarBorderColor;
@property (nonatomic) Q shopTheme;
@property (nonatomic) UIColor navBarColor;
@property (nonatomic) UIColor searchBarColor;
@property (nonatomic) BOOL hasShowLiveTip;
- (id)shoppingCartURL;
- (BOOL)hasShowLiveTip;
- (id)navBarColor;
- (id)redpacketURL;
- (id)searchBarBorderColor;
- (id)searchBarColor;
- (id)searchHint;
- (void)setHasShowLiveTip:;
- (unsigned long long)shopTheme;
- (BOOL)showSearchButton;
- (id)topSearchInfo;
- (void)updateWithInfoResponse:;
- (id)searchBarTextColor;
- (id)serviceURL;
- (void).cxx_destruct;
- (id)orderURL;
- (void)setInfoResponse:;
- (id)infoResponse;
@end
