@interface AWEDetailDuetActionServiceImpl : NSObject
@property (nonatomic) AWEDetailDuetViewModel stateContext;
@property (nonatomic) AWEDetailDuetTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionWithActionSender:;
- (id)initWithStateContext:tracker:;
- (void)setStateContext:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (id)stateContext;
@end
