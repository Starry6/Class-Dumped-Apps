@interface CBPreset : NSObject
@property (nonatomic) BOOL trueToneDisabled;
@property (nonatomic) BOOL nightShiftDisabled;
@property (nonatomic) BOOL autoBrighnessDisabled;
@property (nonatomic) BOOL brightnessDisabled;
@property (nonatomic) BOOL referenceMode;
- (BOOL)trueToneDisabled;
- (BOOL)nightShiftDisabled;
- (id)initWithCAPreset:;
- (BOOL)autoBrighnessDisabled;
- (BOOL)brightnessDisabled;
- (BOOL)referenceMode;
+ (id)newActive:;
@end
