@interface AWEClientAIModuleService : HTSService
@property (nonatomic) <AWEClientAIUIHelper> UIHelper;
@property (nonatomic) <AWEClientAIAppLogHelper> appLogHelper;
@property (nonatomic) NSDictionary serverPortraits;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeHelper;
- (id)UIHelper;
- (id)appLogHelper;
- (id)processSolariaServerPortraits:;
- (id)serverPortraits;
- (void)setServerPortraits:;
- (void)setUIHelper:;
- (void)setAppLogHelper:;
- (void).cxx_destruct;
@end
