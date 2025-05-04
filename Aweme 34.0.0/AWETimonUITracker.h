@interface AWETimonUITracker : NSObject
@property (nonatomic) NSString actionInfo;
@property (nonatomic) NSString actionInfoV2;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willDispatch;
- (void)didEndDispatch;
- (void)actionBeforeBlockInvoke;
- (void)actionAfterBlockInvoked;
- (id)actionInfoV2;
- (void)setActionInfoV2:;
- (void).cxx_destruct;
- (id)actionInfo;
- (void)setActionInfo:;
@end
