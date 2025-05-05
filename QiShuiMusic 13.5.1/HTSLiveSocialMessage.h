@interface HTSLiveSocialMessage : IESLivePBBaseMessage
@property (nonatomic) q intimacy;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q shareType;
@property (nonatomic) q action;
@property (nonatomic) NSString shareTarget;
@property (nonatomic) q followCount;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
- (long long)intimacy;
- (void)setIntimacy:;
+ (id)descriptor;
@end
