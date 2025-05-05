@interface NEFilterControlProvider : NEFilterProvider
@property (nonatomic) NSDictionary remediationMap;
@property (nonatomic) NSDictionary URLAppendStringMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)handleNewFlow:completionHandler:;
- (void)notifyRulesChanged;
- (void)handleRemediationForFlow:completionHandler:;
- (id)remediationMap;
- (void)setRemediationMap:;
- (id)URLAppendStringMap;
- (void)setURLAppendStringMap:;
@end
