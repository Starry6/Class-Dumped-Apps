@interface ISGraphicSymbolDescriptor : IFGraphicSymbolDescriptor
@property (nonatomic) NSURL _url;
@property (nonatomic) ISResourceProvider _resourceProvider;
@property (nonatomic) BOOL placeholder;
- (BOOL)placeholder;
- (void).cxx_destruct;
- (id)description;
- (id)_url;
- (id)_resourceProvider;
- (void)set_url:;
- (void)set_resourceProvider:;
+ (id)descriptorFromGraphicSymbolRecipe:;
@end
