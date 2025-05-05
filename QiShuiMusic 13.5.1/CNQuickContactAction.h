@interface CNQuickContactAction : CNQuickAction
@property (nonatomic) CNContactAction contactAction;
@property (nonatomic) @? completionBlock;
@property (nonatomic) <CNQuickContactActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)setCompletionBlock:;
- (void)actionDidFinish:;
- (id)delegate;
- (void).cxx_destruct;
- (id)contactViewCache;
- (id)completionBlock;
- (void)action:prepareChildContactViewController:sender:;
- (void)action:presentViewController:sender:;
- (void)action:dismissViewController:sender:;
- (void)action:pushViewController:sender:;
- (void)actionDidUpdate:;
- (void)actionWasCanceled:;
- (void)performWithCompletionBlock:;
- (id)initWithContactAction:;
- (id)contactAction;
- (void)setContactAction:;
@end
