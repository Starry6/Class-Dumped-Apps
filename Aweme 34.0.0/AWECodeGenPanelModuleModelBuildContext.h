@interface AWECodeGenPanelModuleModelBuildContext : NSObject
@property (nonatomic) NSString moduleId;
@property (nonatomic) NSString moduleType;
@property (nonatomic) NSString moduleTitle;
@property (nonatomic) NSString moduleDesc;
@property (nonatomic) NSArray itemIdentifiers;
- (id)moduleId;
- (void)setModuleId:;
- (id)moduleTitle;
- (void)setModuleTitle:;
- (id)moduleDesc;
- (void)setModuleDesc:;
- (id)itemIdentifiers;
- (void).cxx_destruct;
- (id)moduleType;
- (void)setItemIdentifiers:;
- (void)setModuleType:;
@end
