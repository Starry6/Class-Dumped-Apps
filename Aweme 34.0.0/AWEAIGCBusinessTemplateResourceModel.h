@interface AWEAIGCBusinessTemplateResourceModel : NSObject
@property (nonatomic) q resourceType;
@property (nonatomic) NSString fileFormat;
@property (nonatomic) NSString resourceUrl;
@property (nonatomic) NSString resourcePath;
@property (nonatomic) NSString generatedText;
- (id)generatedText;
- (void)configFileFormat:defaultValue:;
- (id)fileFormat;
- (long long)resourceType;
- (void)setResourceType:;
- (id)resourcePath;
- (void).cxx_destruct;
- (void)setResourceUrl:;
- (id)resourceUrl;
- (void)setFileFormat:;
- (void)setResourcePath:;
- (void)setGeneratedText:;
@end
