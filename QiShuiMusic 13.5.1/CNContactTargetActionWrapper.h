@interface CNContactTargetActionWrapper : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : action;
- (SEL)action;
- (void).cxx_destruct;
- (id)target;
- (id)description;
- (id)initWithTarget:action:;
- (void)performActionWithSender:;
@end
