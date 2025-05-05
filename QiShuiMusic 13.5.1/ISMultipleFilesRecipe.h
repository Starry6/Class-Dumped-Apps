@interface ISMultipleFilesRecipe : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)layerTreeForSize:scale:;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedPaperRect;
- (id)hintedPageCurlSize;
- (id)hintedCornerSize;
- (id)hintedUnderPaperRect;
- (id)documentLayerWithRect:withPageFold:iconSize:scale:;
@end
