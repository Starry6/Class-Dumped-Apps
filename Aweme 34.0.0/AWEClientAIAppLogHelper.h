@interface AWEClientAIAppLogHelper : NSObject
@property (nonatomic) <AWEClientAIEventAnalysisService> eventAnalysisService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hookEventArray;
- (void)onEventV3:params:;
- (id)getAdExtPortraitsWithEvent:groupID:logExtra:;
- (id)eventAnalysisService;
- (void)setEventAnalysisService:;
- (id)init;
- (BOOL)enabled;
- (void).cxx_destruct;
@end
