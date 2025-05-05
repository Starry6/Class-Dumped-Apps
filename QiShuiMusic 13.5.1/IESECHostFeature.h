@interface IESECHostFeature : NSObject
+ (void)claimFeature:;
+ (void)claimFeatures:;
+ (BOOL)hardCodeSupports:;
+ (void)lazyRegisterFeatures;
+ (id)sharedRuntimeFeature;
+ (BOOL)supports:;
@end
