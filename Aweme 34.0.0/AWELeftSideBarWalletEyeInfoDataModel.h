@interface AWELeftSideBarWalletEyeInfoDataModel : MTLModel
@property (nonatomic) q status;
@property (nonatomic) AWELeftSideBarIconUrlArrayDataModel openIcon;
@property (nonatomic) AWELeftSideBarIconUrlArrayDataModel closeIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)closeIcon;
- (void)setCloseIcon:;
- (id)openIcon;
- (void)setOpenIcon:;
- (void)setStatus:;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (long long)status;
+ (id)openIconJSONTransformer;
+ (id)closeIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
