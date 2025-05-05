@interface IESECLiveGoodsListBottomRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString secAuthorID;
@property (nonatomic) NSString curProductID;
@property (nonatomic) NSString userActParams;
@property (nonatomic) NSNumber livePanelHeightPercent;
- (void)setSecAuthorID:;
- (id)buildParams;
- (id)curProductID;
- (id)livePanelHeightPercent;
- (id)secAuthorID;
- (void)setCurProductID:;
- (void)setLivePanelHeightPercent:;
- (void)setUserActParams:;
- (id)userActParams;
- (void).cxx_destruct;
@end
