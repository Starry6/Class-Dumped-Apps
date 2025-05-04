@interface AWERequestQuestionnaireControlStrategy : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (void)updateIdentity;
- (void)triggerFrequencyControl:;
- (void)shouldDelayToPerformAction:;
- (BOOL)coldStartTagInvalid;
- (id)coldTimeLag;
- (BOOL)lastTimeIntervalInvalid;
- (id)controlKey;
- (id)lastTimeLag;
- (void).cxx_destruct;
@end
