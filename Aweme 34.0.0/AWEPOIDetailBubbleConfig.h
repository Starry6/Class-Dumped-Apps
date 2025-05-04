@interface AWEPOIDetailBubbleConfig : MTLModel
@property (nonatomic) NSString configName;
@property (nonatomic) NSString sendEventName;
@property (nonatomic) NSString receiveEventName;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL activated;
@property (nonatomic) @? bubbleBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sendEventName;
- (void)setSendEventName:;
- (id)receiveEventName;
- (void)setReceiveEventName:;
- (id)bubbleBlock;
- (void)setBubbleBlock:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setActivated:;
- (BOOL)activated;
- (id)configName;
- (void)setConfigName:;
+ (BOOL)automaticallyDefaultMapping;
@end
