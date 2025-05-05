@interface BKSInsecureDrawingAction : BSAction
@property (nonatomic) NSDictionary pidToContextInfoDictionary;
@property (nonatomic) NSArray processIds;
@property (nonatomic) NSArray secureModeViolations;
- (id)secureModeViolations;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
- (id)initWithInfo:responder:;
- (id)initWithPidToContextIdsDictionary:;
- (id)initWithSecureModeViolations:;
- (id)_initWithPidToContextInfoDictionary:;
- (id)pidToContextInfoDictionary;
- (id)processIds;
@end
