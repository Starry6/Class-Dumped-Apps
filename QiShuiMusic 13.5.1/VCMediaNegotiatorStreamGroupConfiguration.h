@interface VCMediaNegotiatorStreamGroupConfiguration : NSObject
@property (nonatomic) I groupID;
@property (nonatomic) I syncGroupID;
@property (nonatomic) I mediaType;
@property (nonatomic) I mediaSubtype;
@property (nonatomic) NSOrderedSet streamConfigs;
@property (nonatomic) NSOrderedSet codecConfigs;
- (unsigned int)mediaType;
- (void)setMediaType:;
- (void)setGroupID:;
- (unsigned int)groupID;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)mediaSubtype;
- (id)initWithGroupID:mediaType:subtype:syncGroupID:;
- (id)initWithGroupID:mediaType:subtype:syncGroupID:cipherSuite:;
- (void)addStreamConfig:;
- (void)addCodecConfig:;
- (unsigned long long)indexOfCodecConfig:;
- (void)removeStreamConfigs:;
- (void)setMediaSubtype:;
- (id)streamConfigs;
- (id)codecConfigs;
- (unsigned int)syncGroupID;
- (void)setSyncGroupID:;
+ (id)streamGroupConfigWithGroupID:mediaType:subtype:syncGroupID:cipherSuite:;
@end
