@interface AWEIMPhotoPickerModel : NSObject
@property (nonatomic) NSMutableArray selectedImageIds;
@property (nonatomic) NSMutableDictionary phassetsMap;
@property (nonatomic) NSMutableDictionary sendAsLivePhotoIndentifiers;
@property (nonatomic) NSArray assetIdentifiers;
@property (nonatomic) NSMutableDictionary assetMap;
@property (nonatomic) Q assetCount;
@property (nonatomic) Q maxAssetCount;
@property (nonatomic) BOOL useOriginalImage;
@property (nonatomic) BOOL watchOnce;
@property (nonatomic) BOOL isExchangeImage;
@property (nonatomic) AWEIMEditedAssetViewModel editViewModel;
@property (nonatomic) BOOL simpleSendMode;
- (unsigned long long)maxAssetCount;
- (void)setMaxAssetCount:;
- (void)setWatchOnce:;
- (void)setSimpleSendMode:;
- (BOOL)watchOnce;
- (BOOL)simpleSendMode;
- (BOOL)useOriginalImage;
- (BOOL)shouldSendAsLivePhotoIdentifier:;
- (id)sendAsLivePhotoIndentifiers;
- (BOOL)containerAssetIdentifier:;
- (BOOL)isExchangeImage;
- (id)phAssetForIdentify:;
- (void)setIsExchangeImage:;
- (unsigned long long)indexOfAssetIdentifier:;
- (void)setSelectedImageIds:;
- (id)selectedImageIds;
- (void)removeLivePhotoAssetIdentifier:;
- (void)removeAssetIdentifier:;
- (void)setUseOriginalImage:;
- (void)addLivePhotoAssetIdentifierWithoutPostNoti:;
- (void)addLivePhotoAssetIdentifier:;
- (void)removeAssetIdentifiers:;
- (void)setSendAsLivePhotoIndentifiers:;
- (id)phassetsMap;
- (void)setPhassetsMap:;
- (id)init;
- (id)assetIdentifiers;
- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (void)addAsset:;
- (BOOL)moveItemAtIndex:toIndex:;
- (id)editViewModel;
- (void)setEditViewModel:;
- (void)setAssetMap:;
- (id)assetMap;
+ (id)defaultPickModel;
+ (long long)indexOfIdentifier:inAssets:;
@end
