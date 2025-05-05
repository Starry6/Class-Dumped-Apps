@interface SWSystemSleepAssertionProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)acquirePreventSystemSleepAssertionWithIdentifier:;
- (id)acquireSystemActivityAssertionWithIdentifier:;
+ (id)sharedProvider;
@end
