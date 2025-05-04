@interface AWEKnowledgeAlbumInsScaleTool : NSObject
- (id)init;
+ (id)aspectRatioLimitForDetailAlbumElement;
+ (BOOL)shouldImageBackgroundColorFollowContainerForScenes:;
+ (BOOL)disableCropImageForScenes:;
+ (BOOL)enableAlbumInsScale;
+ (double)calculateWHRatioWithModel:;
+ (double)calculateWHRatioWithModel:fromDetail:;
+ (double)calculateWHRatioForOptimize:;
+ (double)calculatePanelAlbumItemHeight:;
+ (id)aspectRatioLimitForDetailAlbumElementFromDetail:;
+ (id)aspectRatioLimitForAlbumInsScale;
@end
