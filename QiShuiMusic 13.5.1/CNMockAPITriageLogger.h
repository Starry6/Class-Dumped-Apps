@interface CNMockAPITriageLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)request:encounteredError:;
- (void)request:containsContact:;
- (void)didReturnAllResultsForContactFetchRequest:;
- (void)request:spentTimeInClientCode:;
- (void)willExecuteFetchRequest:;
- (void)didExecuteFetchRequest:duration:;
- (void)clientStoppedEnumerationForRequest:;
- (void)request:willReturnAnchor:;
@end
