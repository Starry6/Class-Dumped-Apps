@interface AWESearchDecoratorPublishProgressViewModule : NSObject
@property (nonatomic) AWESearchDecoratorManagerContext managerContext;
@property (nonatomic) NSMutableArray progressViews;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)progressViews;
- (void)setProgressViews:;
- (void)setManagerContext:;
- (void)updateWithManagerContext:;
- (void)onDecoratorModuleRemoved;
- (id)managerContext;
- (void)clearAllProgressView;
- (void)createProgressViewWithContext:;
- (BOOL)isUIViewControllerBindedProgressView:;
- (void).cxx_destruct;
@end
