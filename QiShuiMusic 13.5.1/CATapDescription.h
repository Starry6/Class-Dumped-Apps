@interface CATapDescription : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString UUID;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) BOOL isAMixdown;
- (void)setName:;
- (BOOL)isExclusive;
- (void)setUUID:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)name;
- (id)UUID;
- (BOOL)isMono;
- (void)setIsMono:;
- (id)getProcesses;
- (void)setProcesses:;
- (id)initStereoMixdownOfProcessesIDs:;
- (id)initStereoGlobalTapButExcludeProcesses:;
- (id)generateUID;
- (void)setIsExclusive:;
- (BOOL)isAMixdown;
- (void)setIsAMixdown:;
- (id)initWithProcessDevicePairs:;
- (id)initWithActiveStreamsForProcessDevicePairs:;
- (id)initMonoMixdownOfProcessesIDs:;
- (id)initMonoGlobalTapButExcludeProcesses:;
@end
