@interface CDRecentVolumeInfo : NSObject
@property (nonatomic) NSString volume;
@property (nonatomic) CacheDeleteVolume cdVolume;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSNumber freespace;
@property (nonatomic) Q reserve;
@property (nonatomic) NSString bsdDisk;
@property (nonatomic) BOOL hasSnapshot;
@property (nonatomic) NSMutableDictionary services;
@property (nonatomic) q volumeState;
@property (nonatomic) NSDictionary thresholds;
@property (nonatomic) NSMutableDictionary diagnostics;
- (BOOL)_validateWithSharedCacheDeleteForService:;
- (BOOL)isStale;
- (BOOL)isEmpty;
- (id)volume;
- (void)setServices:;
- (void)setReserve:;
- (void)log;
- (id)copyInvalidsAtUrgency:currentlyPushing:;
- (void)setVolume:;
- (id)bsdDisk;
- (void)setHasSnapshot:;
- (id)createVolumeWithPath:;
- (id)volumeServices;
- (void)setVolumeState:;
- (id)initWithCoder:;
- (BOOL)updateServiceInfoAmount:forService:atUrgency:withTimestamp:nonPurgeableAmount:deductFromCurrentAmount:;
- (id)createVolumeWithMountPoint:;
- (id)initWithServices:volumeName:;
- (void)encodeWithCoder:;
- (id)diagnostics;
- (void)removeServiceInfo:;
- (void)setTimestamp:;
- (void)setFreespace:;
- (void).cxx_destruct;
- (id)initWithVolumeInfo:;
- (long long)volumeState;
- (id)cdVolume;
- (BOOL)hasSnapshot;
- (id)timestamp;
- (id)description;
- (BOOL)validateServiceInfo:atUrgency:;
- (id)thresholds;
- (unsigned long long)_reserveForVolume;
- (unsigned long long)reserve;
- (void)setBsdDisk:;
- (void)setCdVolume:;
- (id)services;
- (void)invalidate;
- (id)recentInfoAtUrgency:;
- (id)_recentInfoAtUrgency:validateResults:;
- (id)freespace;
- (void)setDiagnostics:;
- (id)copyWithZone:;
- (void)setThresholds:;
+ (BOOL)supportsSecureCoding;
+ (id)CDRecentVolumeInfo:;
@end
