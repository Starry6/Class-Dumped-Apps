@interface HTSLiveGiftAssetItem : HTSLiveGiftItem
@property (nonatomic) <HTSLiveMyAssetActions> actionCreator;
@property (nonatomic) NSString clickURLString;
- (id)giftItemModelId;
- (id)_getAssetSchemaURL:;
- (id)actionCreator;
- (id)clickURLString;
- (id)giftGroupInfo;
- (BOOL)hideComboAfterSend;
- (id)initWithDomainModel:attachingDIContext:;
- (BOOL)isFreeGift;
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (void)setActionCreator:;
- (void)setClickURLString:;
- (void)updateAsset:;
- (void)updateSubtitleStyle:;
- (void)select;
- (void).cxx_destruct;
- (void)deselect;
- (BOOL)canSelect;
@end
