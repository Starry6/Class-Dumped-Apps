@interface AWEClientAIEventAnalysisService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hookEventArray;
- (BOOL)enableAddEvent;
- (void)onEventV3:params:;
- (id)getAdExtPortraitsWithEvent:groupID:logExtra:;
@end
