@interface AWELandscapeImpl.AwemeModelUtil : NSObject
- (id)init;
+ (id)removeDuplicateAndImageFromAwemeModel:;
+ (id)removeDuplicateAndImageFromLandscapeCellViewModel:;
+ (id)removeDuplicateElementsFromAwemeModel:;
+ (id)removeDuplicateElementsFromLandscapeCellViewModel:;
+ (id)removeImageAlbumAndVRFromAwemeModel:;
+ (id)removeImageAlbumAndVRLandscapeCellViewModel:;
+ (id)nonDuplicateModelsFromModels:targetModels:;
+ (id)nonDuplicateModelsFromCellModels:targetModels:;
+ (BOOL)slideableMixVideoFrom:;
@end
