@interface ISCustomRecipe : NSObject
@property (nonatomic) IFBundle bundle;
@property (nonatomic) NSDictionary bitmapResources;
@property (nonatomic) NSDictionary symbolResources;
@property (nonatomic) <ISCompositorRecipe> recipe;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resourceNamed:;
- (id)bundle;
- (void).cxx_destruct;
- (id)recipe;
- (id)initWithRecipe:bitmapResources:symbolResources:bundle:;
- (id)bitmapResources;
- (id)symbolResources;
+ (id)customRecipeWithInfo:bundle:;
@end
