@interface GEOReferenceTimeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)valueChangedForGEOConfigKey:;
- (void)dealloc;
- (id)_initInternal;
- (id)_retrievePersistedBasisRefTimeData;
- (void)_persistBasisRefTimeData:;
- (double)_referenceTime;
- (void)referenceTimeResult:;
- (void)_syncWithTimed;
- (BOOL)synchronized;
- (void).cxx_destruct;
- (id)description;
- (double)bestReferenceTime;
- (BOOL)_initFromPersistence;
- (BOOL)_didKernBootTimeChange;
- (void)_kernBootTimeResult:;
- (void)_startTimedSync;
+ (id)sharedManager;
@end
