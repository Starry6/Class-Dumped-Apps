@interface AWESearchDecoratorCommentEffectModule : NSObject
@property (nonatomic) AWESearchDecoratorManagerContext managerContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setManagerContext:;
- (id)buildFakeInsertCommentCardWithCommentInfo:withInsertContext:;
- (void)updateWithManagerContext:;
- (void)insertCardForOuterFlowWithContext:completion:;
- (id)managerContext;
- (void).cxx_destruct;
@end
