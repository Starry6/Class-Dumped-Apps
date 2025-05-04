@interface AWEEditMusicModel : MTLModel
@property (nonatomic) NSString musicID;
@property (nonatomic) NSString volume;
@property (nonatomic) NSNumber loop;
@property (nonatomic) NSNumber musicShowRank;
@property (nonatomic) NSString musicRecType;
@property (nonatomic) NSString musicSelectedFrom;
@property (nonatomic) NSString musicTimeInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)musicID;
- (void)setMusicID:;
- (id)musicShowRank;
- (void)setMusicShowRank:;
- (id)musicRecType;
- (void)setMusicRecType:;
- (id)musicSelectedFrom;
- (void)setMusicSelectedFrom:;
- (id)musicTimeInfo;
- (void)setMusicTimeInfo:;
- (id)volume;
- (void)setVolume:;
- (void).cxx_destruct;
- (id)loop;
- (void)setLoop:;
+ (id)JSONKeyPathsByPropertyKey;
@end
