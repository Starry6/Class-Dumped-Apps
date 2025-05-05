@interface IESLiveSaaSStickerApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (void)uploadStickers:;
- (void)filterSensitiveWithText:callBack:;
- (void)requestStickerList:;
- (id)roomModel;
- (void)setRoomModel:;
- (void).cxx_destruct;
@end
