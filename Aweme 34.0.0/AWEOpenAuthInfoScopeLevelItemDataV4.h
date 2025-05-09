@interface AWEOpenAuthInfoScopeLevelItemDataV4 : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray content;
@property (nonatomic) BOOL canSkipConfirm;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString buttonText;
@property (nonatomic) BOOL hideScopeDesc;
@property (nonatomic) BOOL canUserSelect;
@property (nonatomic) BOOL canShowAccount;
@property (nonatomic) NSDictionary noAuthScope;
- (BOOL)canSkipConfirm;
- (void)setCanSkipConfirm:;
- (BOOL)hideScopeDesc;
- (void)setHideScopeDesc:;
- (BOOL)canUserSelect;
- (void)setCanUserSelect:;
- (BOOL)canShowAccount;
- (void)setCanShowAccount:;
- (id)noAuthScope;
- (void)setNoAuthScope:;
- (id)content;
- (void)setDesc:;
- (id)desc;
- (void)setContent:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
