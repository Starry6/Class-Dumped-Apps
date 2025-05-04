@interface AWERepoTemplateInfoModel : NSObject
@property (nonatomic) NSArray allTemplateAssets;
@property (nonatomic) NSArray segInfoArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (id)segInfoArray;
- (void)setSegInfoArray:;
- (void)setAllTemplateAssets:;
- (id)allTemplateAssets;
- (void)p_assembleSegInfos:repoCutSame:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)repo_dataProtocol;
@end
