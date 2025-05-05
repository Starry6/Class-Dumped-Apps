@interface IDSQuickSwitchAcknowledgementTracker : NSObject
@property (nonatomic) BOOL isAwaitingAcknowledgement;
- (id)init;
- (void)dealloc;
- (BOOL)isAwaitingAcknowledgement;
- (void).cxx_destruct;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:;
- (id)identifierForServiceDelegate:;
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:;
- (id)awaitAcknowledgementFromServiceDelegate:;
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
@end
