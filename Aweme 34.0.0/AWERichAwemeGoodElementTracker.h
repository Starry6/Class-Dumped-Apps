@interface AWERichAwemeGoodElementTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)additionInfoForEntranceShowFowModel:;
+ (void)configTrackObject:model:extraInfo:;
+ (id)tuwenTypeForModel:;
+ (void)trackProductEntranceShow:extraInfo:btmInfoDict:;
+ (void)trackProductEntranceClick:clickAreaString:extraInfo:btmInfoDict:;
+ (id)getLinkClickAreaStringWithProductName:productId:;
+ (void)trackProductStickerEntranceShowWithName:aweme:extraInfo:;
+ (void)trackProductStickerEntranceClickWithName:aweme:extraInfo:;
+ (void)trackProductTuwenFrameShowWithAweme:extraInfo:;
@end
