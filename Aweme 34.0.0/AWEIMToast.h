@interface AWEIMToast : DUXToast
@property (nonatomic) @? showCompletion;
@property (nonatomic) @? dismiss;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)DUXToastDidShow:;
- (void)DUXToastWillRemoved:;
- (id)showCompletion;
- (void)setShowCompletion:;
- (id)dismiss;
- (void).cxx_destruct;
- (void)setDismiss:;
+ (void)showText:completion:;
+ (void)showText:dismiss:;
@end
