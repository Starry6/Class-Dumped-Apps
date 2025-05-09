@interface MRContentItemMetadataAudioRoute : NSObject
@property (nonatomic) _MRAudioRouteProtobuf protobuf;
@property (nonatomic) BOOL hasType;
@property (nonatomic) q type;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasSupportsSpatialization;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic) BOOL hasSpatializationEnabled;
@property (nonatomic) BOOL spatializationEnabled;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setName:;
- (id)initWithProtobuf:;
- (id)protobuf;
- (void)setType:;
- (void)setHasType:;
- (BOOL)hasType;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSupportsSpatialization:;
- (void)setSpatializationEnabled:;
- (BOOL)hasSupportsSpatialization;
- (void)setHasSupportsSpatialization:;
- (BOOL)supportsSpatialization;
- (BOOL)hasSpatializationEnabled;
- (void)setHasSpatializationEnabled:;
- (BOOL)isSpatializationEnabled;
@end
