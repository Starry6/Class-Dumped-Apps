@interface AWEPlayerResolutionManager : NSObject
@property (nonatomic) Q cachedGearType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)gearTypesForPreloadWithEnterFrom:inLandscape:;
- (unsigned long long)gearTypesFromDisk;
- (void)writeGearTypesToDisk:;
- (void)recordManualGearTypes:enterFrom:model:inLandscape:;
- (unsigned long long)gearTypesWithEnterFrom:model:inLandscape:;
- (unsigned long long)cachedGearType;
- (void)setCachedGearType:;
- (id)init;
+ (id)sharedManager;
@end
