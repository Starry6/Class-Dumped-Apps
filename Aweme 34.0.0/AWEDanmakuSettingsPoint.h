@interface AWEDanmakuSettingsPoint : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) double value;
@property (nonatomic) double leftValue;
@property (nonatomic) double rightValue;
@property (nonatomic) BOOL shouldShock;
- (double)leftValue;
- (void)setLeftValue:;
- (double)rightValue;
- (void)setRightValue:;
- (BOOL)shouldShock;
- (void)setShouldShock:;
- (double)value;
- (id)view;
- (void)setValue:;
- (void)setView:;
- (void).cxx_destruct;
@end
