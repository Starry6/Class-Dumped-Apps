@interface AWEIMPushGuideSelection : MTLModel
@property (nonatomic) NSString selectionTitle;
@property (nonatomic) NSString selectionTypeDes;
@property (nonatomic) NSString iconUrlString;
@property (nonatomic) BOOL selected;
@property (nonatomic) NSDictionary actions;
@property (nonatomic) NSArray settingsActions;
@property (nonatomic) NSArray pushGroups;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrlString;
- (void)setIconUrlString:;
- (id)selectionTypeDes;
- (void)setSelectionTypeDes:;
- (id)settingsActions;
- (void)setSettingsActions:;
- (id)actions;
- (void).cxx_destruct;
- (void)setSelectionTitle:;
- (BOOL)selected;
- (void)setActions:;
- (id)selectionTitle;
- (void)setSelected:;
- (id)pushGroups;
- (void)setPushGroups:;
+ (id)pushGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
