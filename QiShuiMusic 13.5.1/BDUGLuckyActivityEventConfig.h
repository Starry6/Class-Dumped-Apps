@interface BDUGLuckyActivityEventConfig : BDUGLuckyJSONModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary matchRules;
@property (nonatomic) NSArray associatedGlobalTaskId;
- (id)associatedGlobalTaskId;
- (id)matchRules;
- (void)setAssociatedGlobalTaskId:;
- (void)setMatchRules:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
@end
