@interface EKCompatibility : NSObject
+ (BOOL)simulateLegacyBehaviors;
+ (void)setSimulateLegacyBehaviors:;
+ (void)perform:whileSimulatingLegacyBehaviors:;
+ (BOOL)isProgramSDKAtLeast:;
+ (void)performWhileSimulatingLegacyBehaviors:;
@end
