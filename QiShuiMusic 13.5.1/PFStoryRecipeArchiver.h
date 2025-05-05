@interface PFStoryRecipeArchiver : NSObject
- (id)archivedDataWithRecipe:;
- (id)archivedJSONDataWithRecipe:options:;
- (id)archivedJSONObjectWithRecipe:;
- (id)archivedJSONObjectWithLibrary:;
- (id)archivedJSONObjectWithAsset:;
- (id)_archivedJSONObjectWithOverallDurationInfo:;
- (id)archivedJSONObjectWithStyle:;
- (id)archivedJSONObjectWithAutoEditDecisionList:;
- (id)archivedJSONObjectWithClip:;
- (id)archivedJSONObjectWithCMTime:;
- (id)_archivedJSONObjectWithDurationInfo:;
- (id)archivedJSONObjectWithPresentation:;
+ (id)stringByLibraryKind;
+ (id)stringByAssetKind;
+ (id)stringByDisplayAssetCategory;
+ (id)stringBySongCategory;
+ (id)stringBySongSubcategory;
+ (id)stringByOverallDurationKind;
+ (id)stringByClipPlaybackStyle;
+ (id)stringByClipMotionStyle;
+ (id)stringByClipTransition;
@end
