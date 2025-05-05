@interface CJPayButton : UIButton
@property (nonatomic) double cjEventInterval;
@property (nonatomic) NSNumber cjEventUnavailable;
@property (nonatomic) BOOL disableHightlightState;
- (double)cjEventInterval;
- (id)cjEventUnavailable;
- (BOOL)disableHightlightState;
- (void)setCjEventInterval:;
- (void)setCjEventUnavailable:;
- (void)setDisableHightlightState:;
- (id)init;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)sendAction:to:forEvent:;
@end
