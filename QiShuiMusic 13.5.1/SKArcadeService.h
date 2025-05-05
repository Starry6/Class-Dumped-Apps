@interface SKArcadeService : NSObject
+ (void)registerArcadeAppWithRandomFromLib:randomFromLibLength:resultHandler:;
+ (void)arcadeSubscriptionStatusWithNonce:resultHandler:;
+ (void)repairArcadeApp;
@end
