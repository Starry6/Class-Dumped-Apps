@interface CAPresentationModifier : NSObject
@property (nonatomic) NSString keyPath;
@property (nonatomic) BOOL additive;
@property (nonatomic) CAPresentationModifierGroup group;
@property (nonatomic) @ value;
@property (nonatomic) BOOL enabled;
- (id)init;
- (id)initWithKeyPath:initialValue:additive:;
- (id)CA_copyRenderValue;
- (void)dealloc;
- (void)setValue:velocity:;
- (id)debugDescription;
- (BOOL)additive;
- (id)group;
- (void)write;
- (void)setValue:;
- (id)keyPath;
- (void)setEnabled:;
- (id)initWithKeyPath:initialValue:initialVelocity:additive:preferredFrameRateRangeMaximum:group:;
- (id)value;
- (BOOL)isEnabled;
- (id)initWithKeyPath:initialValue:additive:group:;
@end
