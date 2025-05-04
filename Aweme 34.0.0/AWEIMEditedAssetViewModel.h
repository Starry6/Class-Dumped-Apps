@interface AWEIMEditedAssetViewModel : NSObject
@property (nonatomic) NSMutableDictionary editedModelMap;
- (id)editedExchangeImageCroppedIMLocoalAssetForIdentifier:associatedAsset:;
- (id)editedIMLocoalAssetForIdentifier:associatedAsset:;
- (void)saveEditedAssetForIdentifiers:associatedAssets:;
- (id)editedModelForIdentifier:;
- (id)editedModelMap;
- (void)saveEditedAssetForIdentifiers:associatedAssets:completion:;
- (void)updateEditedMediaPath:userInfo:forAsset:disableVideo:;
- (void)removeEditedModelForIdentifier:;
- (void)removeAllEditedModel;
- (void)setEditedModelMap:;
- (id)init;
- (void).cxx_destruct;
@end
