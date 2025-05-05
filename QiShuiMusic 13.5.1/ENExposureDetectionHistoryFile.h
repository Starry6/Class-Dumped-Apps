@interface ENExposureDetectionHistoryFile : NSObject
@property (nonatomic) NSData fileHash;
@property (nonatomic) NSDate processDate;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) NSNumber keyCount;
@property (nonatomic) NSNumber matchCount;
@property (nonatomic) NSString sourceAppBundleIdentifier;
@property (nonatomic) ENRegion sourceRegion;
- (void)encodeWithXPCObject:;
- (id)metadata;
- (id)initWithXPCObject:error:;
- (void)setMetadata:;
- (void)setSourceAppBundleIdentifier:;
- (id)sourceAppBundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)keyCount;
- (void)setFileHash:;
- (id)fileHash;
- (id)matchCount;
- (id)sourceRegion;
- (void)setSourceRegion:;
- (void)setMatchCount:;
- (id)processDate;
- (void)setProcessDate:;
- (void)setKeyCount:;
@end
