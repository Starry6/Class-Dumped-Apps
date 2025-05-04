@interface AWEUserRelationResponse : NSObject
@property (nonatomic) q followStatus;
@property (nonatomic) NSString contactName;
@property (nonatomic) NSString mobileKey;
@property (nonatomic) BOOL isEnterprise;
@property (nonatomic) BOOL isFirstFollow;
@property (nonatomic) AWEUserFollowUnreadFooter unreadFooter;
@property (nonatomic) AWECodeGenFunctionBanPopupModel popupConfig;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)popupConfig;
- (void)setPopupConfig:;
- (id)mobileKey;
- (void)setMobileKey:;
- (void)setIsEnterprise:;
- (BOOL)isFirstFollow;
- (void)setIsFirstFollow:;
- (id)unreadFooter;
- (void)setUnreadFooter:;
- (id)initWithFollowStatus:contactName:isEnterprise:isFirstFollow:;
- (id)init;
- (BOOL)isEnterprise;
- (id)initWithBlock:;
- (id)contactName;
- (void).cxx_destruct;
- (void)setContactName:;
+ (id)instanceWithBlock:;
@end
