@interface AWEPublishInfiniTaskServiceContainer : IESStaticContainer
- (id)provideSingleton:AWEPublishInfiniTaskFlowMessageServiceProtocol:;
- (id)provideSingleton:AWEPublishInfiniTaskProgressServiceProtocol:;
- (id)provideSingleton:AWEPublishInfiniTaskTimeServiceProtocol:;
- (id)provideSingleton:AWEPublishInfiniTaskFlowServiceProtocol:;
- (id)provideSingleton:AWEPublishInfiniTaskStageServiceProtocol:;
- (id)provideSingleton:AWEPublishInfiniTaskCoordinatorServiceProtocol:;
- (void)dealloc;
@end
