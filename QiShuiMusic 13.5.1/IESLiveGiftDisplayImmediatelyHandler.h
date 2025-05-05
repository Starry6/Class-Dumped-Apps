@interface IESLiveGiftDisplayImmediatelyHandler : NSObject
@property (nonatomic) NSArray bannedGiftTypes;
@property (nonatomic) NSArray bannedAssetTypes;
@property (nonatomic) BOOL enableTrimedAssetGiftShowImmediately;
@property (nonatomic) BOOL enableOptimizeUselessCheckAsset;
@property (nonatomic) <IESLiveGiftDisplayHandlerProtocol> nextHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bannedGiftTypes;
- (BOOL)enableOptimizeUselessCheckAsset;
- (void)setNextHandler:;
- (BOOL)acrossAssetCheckWithGift:;
- (BOOL)acrossImmediatelyShowWithGift:;
- (id)bannedAssetTypes;
- (BOOL)enableDisplayWithGift:context:;
- (BOOL)enableTrimedAssetGiftShowImmediately;
- (id)nextHandler;
- (void)setBannedAssetTypes:;
- (void)setBannedGiftTypes:;
- (void)setEnableOptimizeUselessCheckAsset:;
- (void)setEnableTrimedAssetGiftShowImmediately:;
- (id)init;
- (void).cxx_destruct;
@end
