@interface MCActivationUtilities : NSObject
@property (nonatomic) NSNumber isHRNModeCache;
@property (nonatomic) BOOL isActivatedCache;
@property (nonatomic) NSDictionary activationRecordCache;
@property (nonatomic) NSMutableDictionary didBecomeReadyCallbacks;
@property (nonatomic) BOOL isReady;
- (id)init;
- (id)initPrivate;
- (BOOL)isReady;
- (int)isActivated;
- (void).cxx_destruct;
- (void)setIsReady:;
- (void)_clearCache;
- (id)activationRecord;
- (int)isHRNMode;
- (void)addDidBecomeReadyKey:callback:;
- (id)isHRNModeCache;
- (void)setIsHRNModeCache:;
- (BOOL)isActivatedCache;
- (void)setIsActivatedCache:;
- (id)activationRecordCache;
- (void)setActivationRecordCache:;
- (id)didBecomeReadyCallbacks;
- (void)setDidBecomeReadyCallbacks:;
+ (id)sharedInstance;
@end
