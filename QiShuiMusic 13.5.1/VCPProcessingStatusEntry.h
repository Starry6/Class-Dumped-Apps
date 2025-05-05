@interface VCPProcessingStatusEntry : NSObject
@property (nonatomic) Q taskID;
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) Q status;
@property (nonatomic) Q attempts;
@property (nonatomic) NSDate lastRetryDate;
- (id)localIdentifier;
- (id)lastRetryDate;
- (void).cxx_destruct;
- (unsigned long long)taskID;
- (unsigned long long)status;
- (unsigned long long)attempts;
- (id)initWithLocalIdentifier:andTaskID:andStatus:andAttempts:andLastRetryDate:;
+ (id)entryWithLocalIdentifier:andTaskID:andStatus:andAttempts:andLastRetryDate:;
@end
