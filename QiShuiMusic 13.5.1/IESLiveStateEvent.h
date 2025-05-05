@interface IESLiveStateEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray sourceStates;
@property (nonatomic) IESLiveState targetState;
@property (nonatomic) q type;
@property (nonatomic) @? shouldFireBlock;
@property (nonatomic) @? willFireBlock;
@property (nonatomic) @? didFireBlock;
- (id)shouldFireBlock;
- (id)didFireBlock;
- (void)setDidFireBlock:;
- (void)setShouldFireBlock:;
- (void)setSourceStates:;
- (void)setWillFireBlock:;
- (id)willFireBlock;
- (id)init;
- (void)setName:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)targetState;
- (void)setTargetState:;
- (id)name;
- (id)initWithName:transitionFromStates:toState:;
- (id)sourceStates;
+ (id)eventWithName:transitionFromStates:toState:;
@end
