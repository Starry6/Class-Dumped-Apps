@interface AWEAntiAddictNoticeVideoListener : NSObject
@property (nonatomic) @? triggerBeginBlock;
@property (nonatomic) @? triggerEndBlock;
@property (nonatomic) @? triggerRevokeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)listenerType;
- (void)feedDidDisplayAntiAddictVideo:;
- (id)triggerBeginBlock;
- (id)triggerRevokeBlock;
- (void)setTriggerBeginBlock:;
- (id)triggerEndBlock;
- (void)setTriggerEndBlock:;
- (void)setTriggerRevokeBlock:;
- (void)feedDidRevokeAntiAddictVideo:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
@end
