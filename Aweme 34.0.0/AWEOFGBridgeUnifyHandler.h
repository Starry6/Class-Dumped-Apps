@interface AWEOFGBridgeUnifyHandler : NSObject
@property (nonatomic) AWEOFGBridge bridge;
@property (nonatomic) TTBridgeUnifyExecutor executor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMessageWithStatusCode:;
- (void)handleMessage:resultHandler:;
- (id)convertCommandWithCallMessage:;
- (id)executor;
- (id)bridge;
- (void).cxx_destruct;
- (id)initWithExecutor:;
- (void)setBridge:;
- (void)setExecutor:;
@end
