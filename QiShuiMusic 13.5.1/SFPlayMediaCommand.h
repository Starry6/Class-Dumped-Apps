@interface SFPlayMediaCommand : SFCommand
@property (nonatomic) SFMediaMetadata mediaMetadata;
@property (nonatomic) NSInteger playbackLocation;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)mediaMetadata;
- (void)setMediaMetadata:;
- (int)playbackLocation;
- (void)setPlaybackLocation:;
- (BOOL)hasPlaybackLocation;
+ (BOOL)supportsSecureCoding;
@end
