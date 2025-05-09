@interface AWEUnifiedMusicGroupModel : MTLModel
@property (nonatomic) NSString songID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString author;
@property (nonatomic) AWEURLModel mediaCoverURL;
@property (nonatomic) NSString UGID;
@property (nonatomic) NSNumber userCount;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSString majorUGID;
@property (nonatomic) NSString minorUGID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMusicId:;
- (id)musicId;
- (void)setSongID:;
- (id)UGID;
- (void)setUGID:;
- (id)majorUGID;
- (void)setMajorUGID:;
- (id)minorUGID;
- (void)setMinorUGID:;
- (id)mediaCoverURL;
- (void)setMediaCoverURL:;
- (id)author;
- (void).cxx_destruct;
- (id)title;
- (void)setAuthor:;
- (void)setTitle:;
- (void)setUserCount:;
- (id)userCount;
- (id)songID;
+ (id)majorUGIDJSONTransformer;
+ (id)minorUGIDJSONTransformer;
+ (id)musicIdJSONTransformer;
+ (id)UGIDJSONTransformer;
+ (id)mediaCoverURLJSONTransformer;
+ (id)songIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
