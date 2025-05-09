@interface VCMediaNegotiationBlobV2 : PBCodable
@property (nonatomic) BOOL hasGeneralInfo;
@property (nonatomic) VCMediaNegotiationBlobV2GeneralInfo generalInfo;
@property (nonatomic) BOOL hasBandwidthSettings;
@property (nonatomic) VCMediaNegotiationBlobV2BandwidthSettings bandwidthSettings;
@property (nonatomic) BOOL hasCodecSupport;
@property (nonatomic) VCMediaNegotiationBlobV2CodecFeatures codecSupport;
@property (nonatomic) BOOL hasMicrophoneU1;
@property (nonatomic) VCMediaNegotiationBlobV2MicrophoneSettingsU1 microphoneU1;
@property (nonatomic) BOOL hasCameraU1;
@property (nonatomic) VCMediaNegotiationBlobV2CameraSettingsU1 cameraU1;
@property (nonatomic) BOOL hasMomentsSettings;
@property (nonatomic) VCMediaNegotiationBlobV2MomentsSettings momentsSettings;
@property (nonatomic) NSMutableArray streamGroups;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasGeneralInfo;
- (BOOL)hasBandwidthSettings;
- (BOOL)hasCodecSupport;
- (BOOL)hasMicrophoneU1;
- (BOOL)hasCameraU1;
- (BOOL)hasMomentsSettings;
- (void)clearStreamGroups;
- (void)addStreamGroups:;
- (unsigned long long)streamGroupsCount;
- (id)streamGroupsAtIndex:;
- (id)generalInfo;
- (void)setGeneralInfo:;
- (id)bandwidthSettings;
- (void)setBandwidthSettings:;
- (id)codecSupport;
- (void)setCodecSupport:;
- (id)microphoneU1;
- (void)setMicrophoneU1:;
- (id)cameraU1;
- (void)setCameraU1:;
- (id)momentsSettings;
- (void)setMomentsSettings:;
- (id)streamGroups;
- (void)setStreamGroups:;
- (void)printWithTitle:logFile:;
+ (Class)streamGroupsType;
@end
