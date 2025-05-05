@interface CADisplayPreset : NSObject
@property (nonatomic) BOOL allowTrueTone;
@property (nonatomic) BOOL allowNightShift;
@property (nonatomic) BOOL allowAutoBrightness;
@property (nonatomic) double minSliderBrightness;
@property (nonatomic) double maxSliderBrightness;
@property (nonatomic) BOOL isReference;
@property (nonatomic) CAUserAdjustment userAdjustment;
- (void)dealloc;
- (BOOL)isReference;
- (id)initWithIsReference:userAdjustment:;
- (id)userAdjustmentCommand;
- (void)applyUserAdjustmentCommand:;
- (BOOL)allowTrueTone;
- (BOOL)allowNightShift;
- (BOOL)allowAutoBrightness;
- (double)minSliderBrightness;
- (double)maxSliderBrightness;
- (id)userAdjustment;
@end
