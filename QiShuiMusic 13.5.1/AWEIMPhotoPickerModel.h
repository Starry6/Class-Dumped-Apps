@interface AWEIMPhotoPickerModel : NSObject
@property (nonatomic) NSMutableArray selectedImageIds;
@property (nonatomic) NSArray assetIdentifiers;
@property (nonatomic) NSMutableDictionary assetMap;
@property (nonatomic) Q assetCount;
@property (nonatomic) Q maxAssetCount;
@property (nonatomic) BOOL useOriginalImage;
- (void)addAssetIdentifier:;
- (BOOL)containerAssetIdentifier:;
- (unsigned long long)indexOfAssetIdentifier:;
- (unsigned long long)maxAssetCount;
- (void)removeAssetIdentifier:;
- (id)selectedImageIds;
- (void)setMaxAssetCount:;
- (void)setSelectedImageIds:;
- (void)setUseOriginalImage:;
- (BOOL)useOriginalImage;
- (id)init;
- (void).cxx_destruct;
- (id)assetIdentifiers;
- (unsigned long long)assetCount;
- (void)setAssetMap:;
- (id)assetMap;
+ (id)defaultPickModel;
@end
