@interface ISOverlayEmbossRecipe : NSObject
@property (nonatomic) Q variant;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVariant:;
- (unsigned long long)variant;
- (id)layerTreeForSize:scale:;
@end
