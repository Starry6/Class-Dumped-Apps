@interface AWEWelfareActivityOutOfMoneyAlert : NSObject
@property (nonatomic) AWEPublishBaseTask publishTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (id)publishTask;
- (void)setPublishTask:;
- (void).cxx_destruct;
@end
