@interface MRPlaybackSession : NSObject
@property (nonatomic) _MRPlaybackSessionProtobuf protobuf;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString type;
@property (nonatomic) NSData playbackSessionData;
@property (nonatomic) NSData data;
@property (nonatomic) NSString revision;
@property (nonatomic) NSData metadata;
- (id)initWithProtobuf:;
- (id)data;
- (id)protobuf;
- (id)metadata;
- (id)identifier;
- (void)setType:;
- (id)type;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)revision;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)initWithIdentifier:type:playbackSessionData:revision:metadata:;
- (id)playbackSessionData;
- (void)setPlaybackSessionData:;
@end
