@interface VCSessionMediaTypeSettings : VCObject
@property (nonatomic) I mediaType;
@property (nonatomic) I mediaState;
@property (nonatomic) I remoteMediaState;
@property (nonatomic) NSSet streamGroupIDs;
- (unsigned int)mediaType;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setMediaState:;
- (id)description;
- (id)initWithMediaType:;
- (void)addStreamGroupID:;
- (id)streamGroupIDs;
- (unsigned int)mediaState;
- (unsigned int)remoteMediaState;
- (void)setRemoteMediaState:;
+ (BOOL)supportsSecureCoding;
+ (id)settingsWithMediaType:;
+ (id)serializationClasses;
@end
