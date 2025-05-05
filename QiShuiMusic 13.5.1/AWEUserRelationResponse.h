@interface AWEUserRelationResponse : NSObject
@property (nonatomic) q followStatus;
@property (nonatomic) NSString contactName;
@property (nonatomic) BOOL isEnterprise;
@property (nonatomic) BOOL isFirstFollow;
@property (nonatomic) IESIMUserFollowUnreadFooter unreadFooter;
- (long long)followStatus;
- (id)initWithFollowStatus:contactName:isEnterprise:isFirstFollow:;
- (BOOL)isFirstFollow;
- (void)setFollowStatus:;
- (void)setIsEnterprise:;
- (void)setIsFirstFollow:;
- (void)setUnreadFooter:;
- (id)unreadFooter;
- (id)contactName;
- (id)init;
- (BOOL)isEnterprise;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setContactName:;
+ (id)instanceWithBlock:;
@end
