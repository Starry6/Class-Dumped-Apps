@interface ISRecordResourceProvider : ISResourceProvider
@property (nonatomic) LSRecord record;
@property (nonatomic) NSString templateType;
@property (nonatomic) NSString fileExtension;
- (id)record;
- (id)symbol;
- (void)setTemplateType:;
- (id)resourceNamed:;
- (id)templateType;
- (void).cxx_destruct;
- (id)fileExtension;
- (void)setFileExtension:;
- (unsigned long long)iconShape;
- (id)iconResource;
- (BOOL)_isAppleResource;
- (id)templateIconResource;
- (BOOL)supportsGraphicIcons;
- (BOOL)onlySupportsGraphicIcons;
- (id)customRecipe;
- (id)initWithRecord:options:;
- (void)resolveResources;
@end
