@interface AWEProgressStatusConfig : NSObject
@property (nonatomic) Q progressStatus;
@property (nonatomic) Q triggerAction;
@property (nonatomic) BOOL shouldAnimat;
@property (nonatomic) double delayTimeToChangeStatus;
@property (nonatomic) Q blockStatus;
@property (nonatomic) AWEProgressStatusConfig nextStatusConfig;
- (unsigned long long)blockStatus;
- (void)setBlockStatus:;
- (unsigned long long)progressStatus;
- (void)setProgressStatus:;
- (void)setShouldAnimat:;
- (void)setDelayTimeToChangeStatus:;
- (void)setNextStatusConfig:;
- (id)nextStatusConfig;
- (double)delayTimeToChangeStatus;
- (BOOL)shouldAnimat;
- (void).cxx_destruct;
- (void)setTriggerAction:;
- (unsigned long long)triggerAction;
@end
