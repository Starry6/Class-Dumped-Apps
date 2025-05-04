@interface AWEAntiAddictFeedMaskListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? triggerBeginBlock;
@property (nonatomic) @? triggerEndBlock;
@property (nonatomic) @? triggerRevokeBlock;
- (long long)listenerType;
- (id)triggerBeginBlock;
- (id)triggerRevokeBlock;
- (void)setTriggerBeginBlock:;
- (id)triggerEndBlock;
- (void)setTriggerEndBlock:;
- (void)setTriggerRevokeBlock:;
- (void)systemBlockMaskConfigDidChange;
- (void)feedDidDisplayMask:;
- (void)feedDidEndDisplayMask:;
- (void)feedRevokeMask;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void).cxx_destruct;
@end
