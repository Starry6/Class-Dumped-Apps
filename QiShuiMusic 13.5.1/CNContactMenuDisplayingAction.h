@interface CNContactMenuDisplayingAction : CNContactAction
@property (nonatomic) @? menuProvider;
- (void).cxx_destruct;
- (id)initWithTitle:menuProvider:destructive:;
- (id)menuProvider;
+ (id)contactActionWithTitle:menuProvider:destructive:;
@end
