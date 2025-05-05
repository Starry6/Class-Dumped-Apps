@interface CADDiagnosticsCalDAVLogCollector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)determineExpectedOutputFiles:;
- (void)collect:;
- (id)findAllLogFiles:;
- (id)sortAndTrimLogFiles:context:;
- (id)parseFilenameDates:context:;
@end
