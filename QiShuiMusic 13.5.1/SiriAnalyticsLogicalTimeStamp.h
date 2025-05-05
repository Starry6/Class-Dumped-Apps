@interface SiriAnalyticsLogicalTimeStamp : NSObject
@property (nonatomic) Q nanoSecondsSinceBoot;
@property (nonatomic) NSUUID clockIdentifier;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachAbsoluteTime:clockIdentifier:;
- (id)loggingRepresentation;
- (unsigned long long)nanoSecondsSinceBoot;
- (id)clockIdentifier;
@end
