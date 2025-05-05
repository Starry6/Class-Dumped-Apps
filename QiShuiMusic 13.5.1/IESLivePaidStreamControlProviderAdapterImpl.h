@interface IESLivePaidStreamControlProviderAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)inTrialFinish;
- (void)openPaidPanel:extraURLParams:;
- (void)openPaidPanel:extraURLParams:camera:;
- (BOOL)verifyInteractionAuthDisabled:;
@end
