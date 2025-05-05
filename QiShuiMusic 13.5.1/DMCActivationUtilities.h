@interface DMCActivationUtilities : NSObject
@property (nonatomic) NSNumber hrnModeCache;
@property (nonatomic) BOOL isActivatedCache;
@property (nonatomic) NSDictionary activationRecordCache;
@property (nonatomic) NSMutableDictionary didBecomeReadyCallbacks;
@property (nonatomic) BOOL isReady;
- (id)initPrivate;
- (BOOL)isReady;
- (int)activationState;
- (void).cxx_destruct;
- (void)setIsReady:;
- (void)_clearCache;
- (id)activationRecord;
- (void)addDidBecomeReadyKey:callback:;
- (BOOL)isActivatedCache;
- (void)setIsActivatedCache:;
- (id)activationRecordCache;
- (void)setActivationRecordCache:;
- (id)didBecomeReadyCallbacks;
- (void)setDidBecomeReadyCallbacks:;
- (int)hrnMode;
- (id)hrnModeCache;
- (void)setHrnModeCache:;
+ (id)sharedInstance;
@end
