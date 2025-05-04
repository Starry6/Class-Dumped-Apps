@interface AWELiveRoomGameDataModel : AWEBaseApiModel
@property (nonatomic) q hasGameTagInfo;
@property (nonatomic) AWELiveGameTagInfoModel gameTagInfo;
@property (nonatomic) q hasGameRoomSticker;
@property (nonatomic) AWELiveGameRoomStickerModel gameRoomSticker;
- (id)gameTagInfo;
- (void)setGameTagInfo:;
- (long long)hasGameTagInfo;
- (void)setHasGameTagInfo:;
- (long long)hasGameRoomSticker;
- (void)setHasGameRoomSticker:;
- (id)gameRoomSticker;
- (void)setGameRoomSticker:;
- (void).cxx_destruct;
@end
