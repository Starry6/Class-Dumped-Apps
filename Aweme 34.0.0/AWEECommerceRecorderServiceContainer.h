@interface AWEECommerceRecorderServiceContainer : ACCRecorderServiceContainer
- (id)provideSingleton:ACCRecordModeFactory:;
- (id)provide:ACCRecordFlowConfigProtocol:;
- (id)provideSingleton:ACCRecordConfigService:;
@end
