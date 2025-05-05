@interface MNLPRRuleMatcher : NSObject
- (void).cxx_destruct;
- (id)initForVehicle:withRules:;
- (id)generateMaskedPlateForWaypoints:date:timeZone:error:;
- (id)debug_jsonDescriptionOfLastPlate;
@end
