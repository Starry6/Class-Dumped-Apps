@interface AVAudioUnitComponentManager : NSObject
@property (nonatomic) NSArray tagNames;
@property (nonatomic) NSArray standardLocalizedTagNames;
- (id)init;
- (void)localeChanged:;
- (id)componentsMatchingPredicate:;
- (id)standardLocalizedTagNames;
- (id)componentsMatchingDescription:;
- (id)componentsPassingTest:;
- (void)registrationsChanged:;
- (id)tagNames;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (void)privateAllocInitSingleton;
+ (id)sharedAudioUnitComponentManager;
@end
