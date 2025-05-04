@interface AWEOpenPlatformAuthProcessTemplateDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)fillExtraOAuthParamsForAuthProcess:commonParams:;
+ (BOOL)customCheckEntranceModelForAuthProcess:;
+ (void)customConfigAuthProvider:entranceModel:params:;
@end
