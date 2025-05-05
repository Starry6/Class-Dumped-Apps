@interface UIImageNibPlaceholder : UIImage
@property (nonatomic) q resourceRenderingMode;
@property (nonatomic) UIImageSymbolConfiguration resourceSymbolImageConfiguration;
@property (nonatomic) NSString resourceCatalogName;
@property (nonatomic) double variableValue;
- (void)_commonInit;
- (double)variableValue;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithOtherImage:;
- (id)initWithContentsOfFile:andRuntimeResourceName:;
- (id)initWithData:andRuntimeResourceName:;
- (id)initWithRuntimeSystemSymbolResourceName:;
- (long long)resourceRenderingMode;
- (void)setResourceRenderingMode:;
- (id)resourceSymbolImageConfiguration;
- (void)setResourceSymbolImageConfiguration:;
- (id)resourceCatalogName;
- (void)setResourceCatalogName:;
- (void)setVariableValue:;
@end
