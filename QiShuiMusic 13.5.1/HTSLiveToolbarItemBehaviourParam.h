@interface HTSLiveToolbarItemBehaviourParam : IESLivePBBaseMessage
@property (nonatomic) NSInteger behaviourType;
@property (nonatomic) NSString values;
+ (id)descriptor;
@end
