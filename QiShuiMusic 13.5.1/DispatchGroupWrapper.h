@interface DispatchGroupWrapper : NSObject
@property (nonatomic) NSObject<OS_dispatch_group> dispatchGroup;
- (id)init;
- (void)setDispatchGroup:;
- (void).cxx_destruct;
- (void)notify:;
- (id)dispatchGroup;
- (void)executeWithDispatchGroup:;
@end
