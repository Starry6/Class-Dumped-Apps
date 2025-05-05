@interface CSJTemplatePackageModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
@property (nonatomic) NSString main;
@property (nonatomic) NSArray resources;
@property (nonatomic) CSJTemplateResourceArchiveModel resources_archive;
@property (nonatomic) NSDictionary engines;
- (id)v1TemplateModel;
- (id)v3TemplateModel;
- (id)initWithDicitonary:;
- (id)interactionTemplateModel;
- (id)resources_archive;
- (void)setEngines:;
- (void)setResources_archive:;
- (void)setName:;
- (id)resources;
- (void)setVersion:;
- (id)version;
- (void)setResources:;
- (id)main;
- (id)engines;
- (void).cxx_destruct;
- (id)name;
- (void)setMain:;
@end
