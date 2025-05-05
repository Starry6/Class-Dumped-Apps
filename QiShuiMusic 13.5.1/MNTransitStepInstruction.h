@interface MNTransitStepInstruction : MNTransitInstruction
@property (nonatomic) GEOComposedRouteStep step;
@property (nonatomic) NSDictionary overridenInstructionsMapping;
- (id)step;
- (void).cxx_destruct;
- (id)instructionSet;
- (id)overridenInstructionsMapping;
- (id)initWithStep:overrides:context:;
+ (id)instructionForStep:context:;
+ (id)instructionForStep:overrides:context:;
@end
