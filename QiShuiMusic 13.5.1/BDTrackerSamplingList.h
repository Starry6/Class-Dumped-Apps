@interface BDTrackerSamplingList : NSObject
@property (nonatomic) NSMutableArray samplings;
@property (nonatomic) q did;
@property (nonatomic) q checksum;
@property (nonatomic) q version;
@property (nonatomic) q count;
- (void)setDid:;
- (long long)did;
- (BOOL)hitSamplingForEvent:parameters:;
- (void)loadDid;
- (void)loadList;
- (id)samplings;
- (void)setSamplings:;
- (void)turnOffEventSampling;
- (void)turnOnEventSampling;
- (void)updateListInternal:;
- (void)setCount:;
- (id)init;
- (void)setVersion:;
- (long long)version;
- (void)setup;
- (void).cxx_destruct;
- (void)setChecksum:;
- (long long)count;
- (long long)checksum;
- (void)updateWithResponse:;
+ (id)sharedInstance;
@end
