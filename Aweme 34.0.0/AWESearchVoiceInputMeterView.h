@interface AWESearchVoiceInputMeterView : UIView
@property (nonatomic) NSArray meters;
- (void)setMeters:;
- (void)resetMeters;
- (id)init;
- (void)drawRect:;
- (id)meters;
- (void).cxx_destruct;
- (void)updateMeters:;
@end
