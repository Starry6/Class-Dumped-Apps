@interface IESLiveSaaSCalendarJSBridgeHandler : NSObject
@property (nonatomic) <IESLiveSaaSCalendarEventService> calendarService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createParamModelUsingResult:;
- (void)registerHandlerWithBridge:;
- (void)setCalendarService:;
- (id)calendarService;
- (void).cxx_destruct;
@end
