@interface MTHashAction : MTTreatmentAction
@property (nonatomic) MTIDScheme scheme;
- (void)setScheme:;
- (id)scheme;
- (void).cxx_destruct;
- (id)performAction:context:;
- (id)hashOf:userId:;
- (id)initWithField:configDictionary:;
@end
