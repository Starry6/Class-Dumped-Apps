@interface AWEPlayInteractionCommentElementAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)elementContentViewWithContext:;
- (id)elementViewModelWithContext:;
- (id)commentIconNameWithContext:andModel:;
- (void)updateLayoutWithContext:andModel:inContentView:;
- (id)elementUIConfigWithContext:andModel:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
