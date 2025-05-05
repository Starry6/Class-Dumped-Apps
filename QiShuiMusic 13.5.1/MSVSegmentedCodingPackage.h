@interface MSVSegmentedCodingPackage : NSObject
@property (nonatomic) NSURL packageURL;
@property (nonatomic) NSMutableDictionary segmentEncoderMap;
@property (nonatomic) NSMutableDictionary infoDictionary;
@property (nonatomic) # archivedClass;
@property (nonatomic) NSDictionary allVersions;
- (id)infoDictionary;
- (BOOL)saveWithError:;
- (id)initWithURL:;
- (id)packageURL;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)deleteWithError:;
- (void)setInfoDictionary:;
- (void)setPackageURL:;
- (void)setArchivedClass:;
- (id)coderTypeForSegment:;
- (void)setNeedsInfoDictionaryUpdate;
- (BOOL)writeWithError:;
- (id)encoderForSegment:version:;
- (id)decodersWithError:;
- (id)allVersions;
- (Class)archivedClass;
- (id)segmentEncoderMap;
- (void)setSegmentEncoderMap:;
+ (id)packageTypeIdentifier;
@end
