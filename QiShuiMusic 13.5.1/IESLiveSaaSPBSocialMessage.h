@interface IESLiveSaaSPBSocialMessage : GPBMessage
@property (nonatomic) q intimacy;
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q shareType;
@property (nonatomic) q action;
@property (nonatomic) NSString shareTarget;
@property (nonatomic) q followCount;
- (long long)intimacy;
- (void)setIntimacy:;
+ (id)descriptor;
@end
