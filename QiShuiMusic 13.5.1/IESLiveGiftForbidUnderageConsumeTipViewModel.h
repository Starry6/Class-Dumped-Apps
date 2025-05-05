@interface IESLiveGiftForbidUnderageConsumeTipViewModel : NSObject
@property (nonatomic) NSString tipText;
@property (nonatomic) Q gapDays;
@property (nonatomic) @? closeBlock;
- (unsigned long long)gapDays;
- (id)tipText;
- (id)closeBlock;
- (void)didSetAttachingDIContext;
- (void)fetchTipShowSettings;
- (void)setCloseBlock:;
- (void)setGapDays:;
- (void)setTipText:;
- (void)startGapSomeDays;
- (id)init;
- (void).cxx_destruct;
@end
