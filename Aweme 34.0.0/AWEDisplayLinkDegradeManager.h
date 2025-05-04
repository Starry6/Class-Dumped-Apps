@interface AWEDisplayLinkDegradeManager : NSObject
- (void)displayLinkEmptyImp;
- (void)displayLinkOnceImp;
- (void)displayLinkMultiImp;
- (void)timerSelector;
- (id)init;
+ (id)sharedManager;
@end
