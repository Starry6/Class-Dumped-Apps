@interface ISCompositorElement : NSObject
@property (nonatomic) NSDictionary additionalResources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ISCompositorRecipe> recipe;
@property (nonatomic) <ISCompositorResourceProvider> resourceProvider;
- (id)resourceProvider;
- (id)resourceNamed:;
- (void).cxx_destruct;
- (id)recipe;
- (id)resourceForKey:;
- (id)initWithRecipe:resourceProvider:;
- (id)initWithRecipe:resourceProvider:additionalResources:;
- (id)additionalResources;
@end
