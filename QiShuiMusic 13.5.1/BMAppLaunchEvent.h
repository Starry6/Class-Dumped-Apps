@interface BMAppLaunchEvent : BMEventBase
@property (nonatomic) NSString launchReason;
@property (nonatomic) Q launchType;
@property (nonatomic) BOOL starting;
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString parentBundleID;
@property (nonatomic) NSString extensionHostID;
@property (nonatomic) NSString shortVersionString;
@property (nonatomic) NSString exactVersionString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) I dataVersion;
- (id)initWithProtoData:;
- (id)extensionHostID;
- (void)setLaunchType:;
- (id)proto;
- (void)setExtensionHostID:;
- (id)json;
- (void)setParentBundleID:;
- (id)exactVersionString;
- (id)encodeAsProto;
- (void)setShortVersionString:;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (unsigned long long)launchType;
- (id)launchReason;
- (id)parentBundleID;
- (void)encodeWithCoder:;
- (id)initWithProto:;
- (id)shortVersionString;
- (void).cxx_destruct;
- (void)setLaunchReason:;
- (id)description;
- (id)serialize;
- (id)jsonDict;
- (void)setExactVersionString:;
- (BOOL)isEqual:;
- (id)initWithStarting:bundleId:absoluteTimeStamp:launchReason:launchType:;
- (id)initWithStarting:bundleID:absoluteTimeStamp:launchReason:launchType:parentBundleID:extensionHostID:;
- (id)initWithStarting:bundleID:absoluteTimeStamp:duration:launchReason:launchType:parentBundleID:extensionHostID:;
- (id)initWithStarting:bundleID:absoluteTimeStamp:launchReason:launchType:parentBundleID:extensionHostID:shortVersionString:exactBundleVersion:;
- (id)initWithStarting:bundleID:absoluteTimeStamp:duration:launchReason:launchType:parentBundleID:extensionHostID:shortVersionString:exactBundleVersion:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
