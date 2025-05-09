@interface BMPBAppLaunchEvent : PBCodable
@property (nonatomic) BOOL hasLaunchReason;
@property (nonatomic) NSString launchReason;
@property (nonatomic) BOOL hasLaunchType;
@property (nonatomic) NSInteger launchType;
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL hasParentBundleID;
@property (nonatomic) NSString parentBundleID;
@property (nonatomic) BOOL hasExtensionHostID;
@property (nonatomic) NSString extensionHostID;
@property (nonatomic) BOOL hasShortVersionString;
@property (nonatomic) NSString shortVersionString;
@property (nonatomic) BOOL hasExactVersionString;
@property (nonatomic) NSString exactVersionString;
- (void)setAbsoluteTimestamp:;
- (void)setStarting:;
- (id)extensionHostID;
- (BOOL)hasShortVersionString;
- (void)setLaunchType:;
- (BOOL)hasStarting;
- (void)setHasAbsoluteTimestamp:;
- (BOOL)hasBundleID;
- (BOOL)hasDuration;
- (void)setExtensionHostID:;
- (void)setHasDuration:;
- (void)setParentBundleID:;
- (BOOL)hasAbsoluteTimestamp;
- (void)writeTo:;
- (id)exactVersionString;
- (void)setShortVersionString:;
- (double)absoluteTimestamp;
- (unsigned long long)hash;
- (int)launchType;
- (id)launchReason;
- (void)copyTo:;
- (BOOL)hasLaunchReason;
- (void)setDuration:;
- (id)parentBundleID;
- (void)mergeFrom:;
- (BOOL)starting;
- (id)shortVersionString;
- (void).cxx_destruct;
- (void)setLaunchReason:;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasExactVersionString;
- (BOOL)hasLaunchType;
- (BOOL)hasParentBundleID;
- (void)setHasStarting:;
- (id)dictionaryRepresentation;
- (void)setHasLaunchType:;
- (BOOL)hasExtensionHostID;
- (id)bundleID;
- (double)duration;
- (id)launchTypeAsString:;
- (void)setExactVersionString:;
- (BOOL)isEqual:;
- (int)StringAsLaunchType:;
- (id)copyWithZone:;
- (void)setBundleID:;
@end
