@interface ISiOSAppClipRecipe : NSObject
@property (nonatomic) BOOL shouldOnlyDrawBorder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)blurRadius;
- (id)layerTreeForSize:scale:;
- (id)appRect;
- (BOOL)shouldOnlyDrawBorder;
- (void)setShouldOnlyDrawBorder:;
@end
