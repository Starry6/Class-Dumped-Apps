@interface TLVibrationPattern : NSObject
@property (nonatomic) @ _artificiallyRepeatingPropertyListRepresentation;
@property (nonatomic) @ propertyListRepresentation;
@property (nonatomic) @ contextObject;
- (id)init;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:;
- (void).cxx_destruct;
- (id)_initWithPropertyListRepresentation:skipValidation:;
- (id)_artificiallyRepeatingPropertyListRepresentation;
- (double)_computedDuration;
- (void)appendVibrationComponentWithDuration:isPause:;
- (id)contextObject;
- (void)setContextObject:;
+ (id)noneVibrationPattern;
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:;
+ (id)simpleVibrationPatternWithVibrationDuration:pauseDuration:;
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:;
@end
