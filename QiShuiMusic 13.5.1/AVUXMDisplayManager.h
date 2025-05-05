@interface AVUXMDisplayManager : NSObject
@property (nonatomic) AVDisplayCriteria preferredDisplayCriteria;
- (id)initInternal;
- (id)init;
- (void)dealloc;
- (id)preferredDisplayCriteria;
- (id)currentUXMDisplayCriteria;
- (void)_updateUXMWithDisplayCriteriaWithLock:;
- (void)_updateUXMWithDisplayCriteria:;
- (void)setPreferredDisplayCriteria:;
+ (id)sharedAVKitUXMDisplayManager;
@end
