@interface AWEPlayInteractionReusableChecker : NSObject
@property (nonatomic) <AWEPlayInteractionReusableSafeProtocol> target;
@property (nonatomic) AWEInteractionReusableMsgModel resuableMsgModel;
@property (nonatomic) BOOL isSafe;
@property (nonatomic) Q sceneType;
@property (nonatomic) NSString scene;
@property (nonatomic) BOOL isCurrentSafe;
- (id)getBacktracesWithSkippedDepth:needAllThreads:;
- (BOOL)isCurrentSafe;
- (id)resuableMsgModel;
- (BOOL)checkReusableSafe;
- (void)trackUserException;
- (id)getSceneWithSceneType:;
- (id)getSceneStr;
- (void)setResuableMsgModel:;
- (void)setScene:;
- (id)target;
- (id)scene;
- (void)setTarget:;
- (void).cxx_destruct;
- (BOOL)isSafe;
- (void)setIsSafe:;
- (unsigned long long)sceneType;
- (void)setSceneType:;
+ (id)reusableSafeCheckBeginWithTarget:;
@end
