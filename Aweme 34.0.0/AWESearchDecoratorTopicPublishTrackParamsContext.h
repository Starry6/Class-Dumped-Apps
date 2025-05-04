@interface AWESearchDecoratorTopicPublishTrackParamsContext : NSObject
@property (nonatomic) AWESearchDecoratorManagerContext managerContext;
@property (nonatomic) AWESearchDecoratorTopicBusinessParams businessParams;
@property (nonatomic) AWESearchDecoratorPublishCreationTask creationTask;
- (id)businessParams;
- (void)setBusinessParams:;
- (void)setManagerContext:;
- (id)managerContext;
- (void)setCreationTask:;
- (id)creationTask;
- (void).cxx_destruct;
@end
