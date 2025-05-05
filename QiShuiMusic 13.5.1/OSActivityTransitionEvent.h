@interface OSActivityTransitionEvent : OSActivityEvent
@property (nonatomic) Q transitionToActivityID;
- (void)_addProperties:;
- (id)initWithEntry:;
- (unsigned long long)transitionToActivityID;
@end
