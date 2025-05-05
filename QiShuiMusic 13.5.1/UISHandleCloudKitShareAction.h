@interface UISHandleCloudKitShareAction : BSAction
@property (nonatomic) CKShareMetadata shareMetadata;
- (id)data;
- (long long)UIActionType;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)keyDescriptionForSetting:;
- (id)shareMetadata;
- (id)initWithShareMetadata:;
+ (id)cloudKitShareActionWithShareMetadata:;
+ (void)loadCloudKitFramework;
@end
