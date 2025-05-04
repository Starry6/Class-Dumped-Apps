@interface AWELivePreStreamBizStatusContext : NSObject
@property (nonatomic) Q statusOptions;
@property (nonatomic) Q oldStatusOptions;
@property (nonatomic) <AWELivePreStreamBizStatusContextDelegate> delegate;
- (void)updateBizStatus:open:;
- (unsigned long long)statusOptions;
- (void)setOldStatusOptions:;
- (void)setStatusOptions:;
- (unsigned long long)oldStatusOptions;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
