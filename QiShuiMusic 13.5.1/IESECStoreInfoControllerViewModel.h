@interface IESECStoreInfoControllerViewModel : NSObject
@property (nonatomic) IESECStorePageContext pageContext;
@property (nonatomic) IESECShopInfoResponse infoResponse;
@property (nonatomic) BOOL shouldShowList;
@property (nonatomic) BOOL hideAccountInfo;
@property (nonatomic) BOOL showFansClubBubble;
@property (nonatomic) BOOL joinStatus;
@property (nonatomic) BOOL showAccountInfo;
@property (nonatomic) IESECRelationFansClubBubbleConfigModel fansClubBubbleConfig;
- (BOOL)showAccountInfo;
- (BOOL)hideAccountInfo;
- (BOOL)p_exceedFansClubBubbleShowLimit;
- (id)fansClubBubbleConfig;
- (id)fansClubUrl;
- (BOOL)followStatus;
- (BOOL)haveCouponBubble;
- (BOOL)joinStatus;
- (BOOL)openFansClub;
- (void)requestFansClubInfo:;
- (BOOL)shouldShowList;
- (BOOL)showFansClubBubble;
- (void)transferToFansClubBoard;
- (void)updateWithInfoResponse:pageContext:;
- (void).cxx_destruct;
- (void)setInfoResponse:;
- (id)infoResponse;
- (id)pageContext;
- (void)setPageContext:;
@end
