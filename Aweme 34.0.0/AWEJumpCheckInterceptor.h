@interface AWEJumpCheckInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)firstJumpWhitelistApps;
+ (void)checkRequest:isClickJump:model:error:;
+ (void)checkRequest:isClickJump:model:adInfo:error:;
+ (void)checkRequest:isClickJump:hasInteraction:model:adInfo:error:;
+ (BOOL)isAllowUserClickJump:;
+ (BOOL)isSplashFirstJumpAllowListWithURL:;
+ (BOOL)isWhiteListUrl:containsInteractionJumpList:;
+ (id)normalSchemes;
+ (id)secondJumpWhitelistApps;
+ (BOOL)isWhiteListUniversalLink:;
@end
