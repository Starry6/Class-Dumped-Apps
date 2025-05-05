@interface EFPriorityDesignator : NSObject
@property (nonatomic) Q priority;
- (void)setPriority:;
- (unsigned long long)priority;
+ (id)currentDesignatorIfExists;
+ (id)currentDesignatorStack;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignator;
+ (id)currentDesignatorStackIfExists;
+ (id)pushNewDesignator;
+ (id)installNewDesignator;
@end
