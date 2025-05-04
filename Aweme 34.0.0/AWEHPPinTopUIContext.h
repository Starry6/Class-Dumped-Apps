@interface AWEHPPinTopUIContext : NSObject
@property (nonatomic) NSString channelID;
@property (nonatomic) AWEHPPinTopComponentTask task;
@property (nonatomic) <AWEHPPinTopComponentProtocol> component;
@property (nonatomic) AWEHPPinTopComponentUIConfig componentConfig;
@property (nonatomic) NSString modifyObserverName;
@property (nonatomic) @? showResult;
@property (nonatomic) @? completion;
@property (nonatomic) UIViewController contentVC;
- (id)componentConfig;
- (id)showResult;
- (id)contentVC;
- (void)setContentVC:;
- (void)setComponentConfig:;
- (void)setShowResult:;
- (id)modifyObserverName;
- (void)setModifyObserverName:;
- (void)setTask:;
- (void)setChannelID:;
- (id)completion;
- (id)component;
- (id)task;
- (void)setCompletion:;
- (id)channelID;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setComponent:;
@end
