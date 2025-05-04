@interface AWEDTOMusicBeatsModel : MTLModel
@property (nonatomic) q musicBeatStatus;
@property (nonatomic) q musicBeatResult;
@property (nonatomic) BOOL isMusicBeatsAvailable;
@property (nonatomic) NSArray beatsArray;
@property (nonatomic) NSDictionary projectTimeIntervalMap;
@property (nonatomic) NSDictionary projectMusicTimeMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)musicBeatStatus;
- (void)setMusicBeatStatus:;
- (long long)musicBeatResult;
- (void)setMusicBeatResult:;
- (BOOL)isMusicBeatsAvailable;
- (void)setIsMusicBeatsAvailable:;
- (id)beatsArray;
- (void)setBeatsArray:;
- (id)projectTimeIntervalMap;
- (void)setProjectTimeIntervalMap:;
- (id)projectMusicTimeMap;
- (void)setProjectMusicTimeMap:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
