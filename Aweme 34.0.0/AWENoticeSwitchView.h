@interface AWENoticeSwitchView : UIView
@property (nonatomic) double labelMaxWidth;
@property (nonatomic) @? switchValueChangedBlock;
- (id)switchValueChangedBlock;
- (void)setSwitchValueChangedBlock:;
- (id)initWithTitle:subtitle:isOn:;
- (void)setSwitchOn:triggerCallback:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (double)labelMaxWidth;
@end
