@interface CMFitnessJuniorGoals : NSObject
- (id)init;
- (void)dealloc;
+ (BOOL)isAvailable;
+ (unsigned long long)recommendedMoveMinutesForLevel:userInfo:error:;
@end
