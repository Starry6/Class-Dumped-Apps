@interface AWECampaignPendantLimitModel : MTLModel
@property (nonatomic) NSNumber installTimeLimit;
@property (nonatomic) NSNumber activeTimeLimit;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)installTimeLimit;
- (id)activeTimeLimit;
- (void)setInstallTimeLimit:;
- (void)setActiveTimeLimit:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
