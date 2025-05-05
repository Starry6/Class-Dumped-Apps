@interface IESLiveNewDressServiceProxy : NSProxy
@property (nonatomic) IESLiveNewDressContainer container;
@property (nonatomic) IESLiveNewDressDataManager dataManager;
@property (nonatomic) IESLiveNewDressResourceManager resourceManager;
@property (nonatomic) NSArray targets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleNoSelector:;
- (void)updateDressContext:;
- (id)targets;
- (void)setContainer:;
- (id)init;
- (id)container;
- (id)methodSignatureForSelector:;
- (void)setTargets:;
- (void)setDataManager:;
- (BOOL)isProxy;
- (id)dataManager;
- (void).cxx_destruct;
- (id)resourceManager;
- (void)forwardInvocation:;
- (void)setResourceManager:;
@end
