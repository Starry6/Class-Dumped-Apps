@interface AWEPlayInteractionPerformManager : NSObject
@property (nonatomic) NSMutableArray performOnDisplayActions;
@property (nonatomic) NSMutableArray performOnHideActions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldPrepareForDisplay:;
- (void)p_performOnDisplay:;
- (void)p_trackEventOnDisplay:params:needStagingFlag:;
- (void)p_performOnHide:;
- (id)performOnDisplayActions;
- (void)setPerformOnDisplayActions:;
- (id)performOnHideActions;
- (void)setPerformOnHideActions:;
- (void)p_executePerformOnDisplayActions;
- (void)p_executePerformOnHideActions:;
- (void).cxx_destruct;
- (void)reset;
@end
