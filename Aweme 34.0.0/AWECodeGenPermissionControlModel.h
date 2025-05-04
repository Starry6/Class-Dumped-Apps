@interface AWECodeGenPermissionControlModel : AWEBaseDataModel
@property (nonatomic) BOOL unsubCanSet;
@property (nonatomic) BOOL showDisturbButton;
@property (nonatomic) BOOL showUnsubButton;
@property (nonatomic) q defaultStatus;
@property (nonatomic) q disturbStatus;
@property (nonatomic) q subStatus;
- (long long)disturbStatus;
- (void)setDisturbStatus:;
- (void)setDefaultStatus:;
- (long long)defaultStatus;
- (BOOL)showUnsubButton;
- (BOOL)showDisturbButton;
- (long long)subStatus;
- (void)setSubStatus:;
- (BOOL)unsubCanSet;
- (void)setUnsubCanSet:;
- (void)setShowDisturbButton:;
- (void)setShowUnsubButton:;
+ (id)JSONKeyPathsByPropertyKey;
@end
