@interface CLPLOGENTRYVISIONLSLHeading : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CLPLOGENTRYVISIONTimeStamp timestamp;
@property (nonatomic) BOOL hasRotationFromGlobalToDeviceFrame;
@property (nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN rotationFromGlobalToDeviceFrame;
@property (nonatomic) BOOL hasRotationFromGlobalToCameraFrame;
@property (nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN rotationFromGlobalToCameraFrame;
@property (nonatomic) BOOL hasRotationalAccuracyInRadians;
@property (nonatomic) CLPLOGENTRYVISIONSimdDoubleM rotationalAccuracyInRadians;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasGlobalReferenceFrame;
@property (nonatomic) NSInteger globalReferenceFrame;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) CLPLOGENTRYVISIONLSLLocation location;
@property (nonatomic) BOOL hasSupplemantaryInfo;
@property (nonatomic) CLPLOGENTRYVISIONLSLHeadingSupplInfo supplemantaryInfo;
- (double)confidence;
- (void)setConfidence:;
- (BOOL)hasLocation;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)location;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setLocation:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (id)rotationFromGlobalToDeviceFrame;
- (void)setRotationFromGlobalToDeviceFrame:;
- (id)rotationFromGlobalToCameraFrame;
- (void)setRotationFromGlobalToCameraFrame:;
- (id)rotationalAccuracyInRadians;
- (void)setRotationalAccuracyInRadians:;
- (int)globalReferenceFrame;
- (void)setGlobalReferenceFrame:;
- (id)supplemantaryInfo;
- (void)setSupplemantaryInfo:;
- (BOOL)hasRotationFromGlobalToDeviceFrame;
- (BOOL)hasRotationFromGlobalToCameraFrame;
- (BOOL)hasRotationalAccuracyInRadians;
- (void)setHasGlobalReferenceFrame:;
- (BOOL)hasGlobalReferenceFrame;
- (id)globalReferenceFrameAsString:;
- (int)StringAsGlobalReferenceFrame:;
- (BOOL)hasSupplemantaryInfo;
@end
