@interface SAHIDStep : NSObject
@property (nonatomic) I debugid;
@property (nonatomic) NSString debugidString;
@property (nonatomic) SATimestamp timestamp;
@property (nonatomic) NSInteger pid;
@property (nonatomic) Q tid;
- (id)debugDescription;
- (int)pid;
- (void).cxx_destruct;
- (id)timestamp;
- (unsigned long long)tid;
- (id)debugidString;
- (unsigned int)debugid;
@end
