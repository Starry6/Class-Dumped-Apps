@interface IESLiveDressServiceWapper : NSObject
@property (nonatomic) <IESLiveNewDressService> dressService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)borderFromDressID:completion:;
- (void)borderFromDressID:isWaitDownload:completion:;
- (void)dressFromDressID:completion:;
- (id)dressFromDressID:error:;
- (void)dressFromDressID:isWaitDownload:completion:;
- (id)dressService;
- (id)getDressDataVersion;
- (id)getDressDataWithDressID:;
- (void)guestBattleFromDressID:completion:;
- (void)openAssetFromDressID:completion:;
- (void)prefetchDressResourceFromDressIDs:source:;
- (id)profileSkinDressResourceFromDressID:error:;
- (void)profileSkinFromDressID:completion:;
- (id)profileSkinFromDressID:error:;
- (id)redEnvelopeSkinDressResourceFromDressID:error:;
- (void)setDressService:;
- (void)updateDressListWithRoomID:completion:;
- (void)userEnterFromDressID:completion:;
- (void)userEnterFromDressID:isWaitDownload:completion:;
- (void).cxx_destruct;
@end
