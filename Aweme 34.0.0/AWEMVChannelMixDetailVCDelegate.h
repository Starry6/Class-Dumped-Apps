@interface AWEMVChannelMixDetailVCDelegate : NSObject
@property (nonatomic) <AWEAwemeDetailTableViewControllerDelegate> forwardingDelegate;
@property (nonatomic) AWEMVChannelPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (id)forwardingTargetForSelector:;
- (BOOL)respondsToSelector:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)forwardingDelegate;
- (void)setForwardingDelegate:;
+ (id)sharedInstance;
@end
