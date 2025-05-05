@interface CLPIndoorMotionActivity : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasMotionActivity;
@property (nonatomic) CLPMotionActivity motionActivity;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)motionActivity;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setMotionActivity:;
- (BOOL)hasMotionActivity;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
