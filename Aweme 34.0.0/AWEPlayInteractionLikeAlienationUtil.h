@interface AWEPlayInteractionLikeAlienationUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)loadResourceIfNeededForModels:;
+ (BOOL)enableLikeAlienationOpt;
+ (void)loadResourceWithChannel:;
+ (id)gaiyaTokenForModel:;
+ (BOOL)isAlienationOffCmdActive:res:;
+ (id)activityStartTimeForModel:;
+ (id)diggAlienationInfoForModel:;
+ (void)addMessageListeningIfNeeded:;
+ (void)removeMessageListening:;
+ (BOOL)isDiggAlienationOffCmdActiveWithModel:;
+ (BOOL)isDoubleClickAlienationOffCmdActiveWithModel:;
+ (void)reportTokenToSlardarIfNeededWithModel:usingState:;
+ (id)paramsForCoverageRate;
@end
