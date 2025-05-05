@interface IESECSliceXTemplatePackage : NSObject
@property (nonatomic) IESECSliceXElement element;
@property (nonatomic) IESECSliceXTemplateConfig templateConfig;
- (id)initWithJSONDict:templateInfo:;
- (id)templateConfig;
- (id)element;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)resourcePackageWithJSONDict:templateInfo:;
@end
