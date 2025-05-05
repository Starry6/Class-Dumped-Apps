@interface CADDiagnosticsDatabaseCollector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (id)database;
- (void)determineExpectedOutputFiles:;
- (void)collect:;
- (void)collectDatabase:auxDatabase:outputURL:context:;
@end
