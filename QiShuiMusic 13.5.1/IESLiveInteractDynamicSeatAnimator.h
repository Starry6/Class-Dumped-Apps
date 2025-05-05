@interface IESLiveInteractDynamicSeatAnimator : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) NSDictionary info;
@property (nonatomic) NSArray groups;
@property (nonatomic) NSString itemId;
@property (nonatomic) UIView<IESLiveInteractSeatProvider> seat;
@property (nonatomic) @? completion;
@property (nonatomic) BOOL disableAnimate;
- (BOOL)disableAnimate;
- (void)setDisableAnimate:;
- (void)startAnimate;
- (id)completion;
- (void)setCompletion:;
- (id)groups;
- (void)setGroups:;
- (void)setInfo:;
- (id)view;
- (void).cxx_destruct;
- (id)info;
- (void)setView:;
- (id)seat;
- (void)setSeat:;
- (id)itemId;
- (void)setItemId:;
+ (id)animatorWithInfo:view:;
@end
