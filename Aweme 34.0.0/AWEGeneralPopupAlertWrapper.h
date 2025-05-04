@interface AWEGeneralPopupAlertWrapper : NSObject
@property (nonatomic) BOOL shouldPersistLocalDescriptors;
@property (nonatomic) AWEPublishBaseTask publishTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (void)prepareWithContext:onCompletion:;
- (id)publishTask;
- (void)setPublishTask:;
- (BOOL)shouldPersistLocalDescriptors;
- (void)setShouldPersistLocalDescriptors:;
- (void).cxx_destruct;
@end
