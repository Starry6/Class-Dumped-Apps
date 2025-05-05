@interface IESECLiveAtomicAbilityCenter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableDictionary actionMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)behaviorExecuteWithLiveContext:behavior:params:completion:;
- (void)behaviorExecuteWithLiveContext:serverActionParams:completion:;
- (void)bindWithBehavior:serviceName:action:;
- (void)setActionMap:;
- (void).cxx_destruct;
- (id)actionMap;
@end
