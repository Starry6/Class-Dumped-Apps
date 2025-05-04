@interface AWEXBridgeSpeechEngine : NSObject
@property (nonatomic) SpeechEngine realEngine;
@property (nonatomic) <BDXSpeechEngineDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onMessageWithType:andData:;
- (BOOL)createEngineWithDelegate:;
- (int)initEngine;
- (id)realEngine;
- (void)setRealEngine:;
- (void)setEngineParams:;
- (int)finishTalking;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)destroyEngine;
- (int)startEngine;
- (int)stopEngine;
@end
