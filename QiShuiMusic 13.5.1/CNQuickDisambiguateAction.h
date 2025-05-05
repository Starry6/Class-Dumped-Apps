@interface CNQuickDisambiguateAction : CNQuickPropertyAction
@property (nonatomic) NSOrderedSet actions;
@property (nonatomic) CNQuickAction mainAction;
@property (nonatomic) BOOL ignoreMainAction;
- (void)setActions:;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithActions:;
- (id)titleForContext:;
- (id)subtitleForContext:;
- (void)performWithCompletionBlock:;
- (id)mainAction;
- (void)setMainAction:;
- (BOOL)ignoreMainAction;
- (void)setIgnoreMainAction:;
@end
