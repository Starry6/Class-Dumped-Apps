@interface IESLiveGuestFaceGiftResourceMgr : NSObject
@property (nonatomic) IESLiveThreadSafeMutableArray guestFaceGiftAssetIdArray;
@property (nonatomic) q fetchEffectMomentType;
- (long long)fetchEffectMomentType;
- (void)generateGuestFaceGiftResourceAssetIdArrayWithGiftList:type:;
- (id)guestFaceGiftAssetIdArray;
- (void)setFetchEffectMomentType:;
- (void)setGuestFaceGiftAssetIdArray:;
- (void).cxx_destruct;
@end
