@interface CSJTemplateModel : NSObject
@property (nonatomic) NSString main;
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
@property (nonatomic) NSArray resources;
@property (nonatomic) CSJTemplateResourceArchiveModel resources_archive;
@property (nonatomic) q type;
@property (nonatomic) BOOL reload;
- (id)csj_dictionaryValue;
- (id)initWithDicitonary:;
- (BOOL)mainURLValid;
- (BOOL)resourceListValid;
- (BOOL)resourcesArchiveValid;
- (id)resourcesMap;
- (BOOL)resourcesValid;
- (id)resources_archive;
- (void)setReload:;
- (void)setResources_archive:;
- (BOOL)reload;
- (id)init;
- (void)setName:;
- (id)resources;
- (void)setVersion:;
- (id)version;
- (void)setResources:;
- (void)setType:;
- (id)main;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (void)setMain:;
@end
