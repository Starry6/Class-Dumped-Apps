@interface IESECStoreHeaderViewModel : NSObject
@property (nonatomic) IESECShopInfoResponse infoResponse;
@property (nonatomic) IESECStorePageContext pageContext;
@property (nonatomic) BOOL showListView;
@property (nonatomic) BOOL hideAccountInfo;
@property (nonatomic) IESECURLModel flagshipBg;
@property (nonatomic) IESECStoreListSetting usualListSetting;
@property (nonatomic) IESECStoreListSetting videoListSetting;
@property (nonatomic) IESECStoreListSetting promotionListSetting;
@property (nonatomic) IESECStoreListSetting flagshipListSetting;
- (BOOL)hideAccountInfo;
- (id)flagshipBg;
- (id)flagshipListSetting;
- (id)promotionListSetting;
- (id)storeListSettings;
- (void)updateWithInfoResponse:;
- (id)usualListSetting;
- (id)videoListSetting;
- (void).cxx_destruct;
- (BOOL)showListView;
- (void)setInfoResponse:;
- (id)infoResponse;
- (id)pageContext;
- (void)setPageContext:;
@end
