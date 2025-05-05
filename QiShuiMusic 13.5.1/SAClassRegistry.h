@interface SAClassRegistry : NSObject
- (void)registerClass:forAceClassWithName:inGroupWithIdentifier:;
- (Class)classForAceClassWithName:inGroupWithIdentifier:;
+ (id)sharedClassRegistry;
+ (void)registerAcronym:forGroupWithIdentifier:;
+ (void)registerClass:forAceClassName:inGroupWithIdentifier:;
+ (Class)classForAceClassName:inGroupWithIdentifier:;
@end
