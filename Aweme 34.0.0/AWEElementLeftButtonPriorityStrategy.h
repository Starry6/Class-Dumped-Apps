@interface AWEElementLeftButtonPriorityStrategy : NSObject
@property (nonatomic) NSArray specialHandlers;
@property (nonatomic) NSArray commonHandlers;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterElements:context:buildContext:;
- (unsigned long long)handleSpecialButtonPriority:;
- (unsigned long long)handleCommonButtonPriority:;
- (id)specialHandlers;
- (id)commonHandlers;
- (void)setSpecialHandlers:;
- (void)setCommonHandlers:;
- (long long)priority;
- (void).cxx_destruct;
+ (BOOL)activateWithContext:;
@end
