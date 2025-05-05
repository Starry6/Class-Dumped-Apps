@interface DiagnosticCaseUsage : NSManagedObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString type;
@property (nonatomic) NSString subtype;
@property (nonatomic) NSString process;
@property (nonatomic) NSDate lastSeen;
@property (nonatomic) NSDate lastAccepted;
@property (nonatomic) NSInteger casesSeen;
@property (nonatomic) NSInteger casesAccepted;
@property (nonatomic) double interarrival_mean;
@property (nonatomic) double interarrival_var;
@end
