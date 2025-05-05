@interface IESLiveChatRoomSelfGuideManagerConfig : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) BOOL guideEnable;
- (void)setGuideEnable:;
- (BOOL)guideEnable;
- (void)setEventContext:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)eventContext;
@end
