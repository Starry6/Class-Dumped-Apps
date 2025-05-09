@interface BDARVVideoModel : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSDictionary videoModel;
@property (nonatomic) NSArray playTrackUrlList;
@property (nonatomic) NSArray playoverTrackUrlList;
@property (nonatomic) NSArray effectivePlayTrackUrlList;
@property (nonatomic) double effectivePlayTime;
@property (nonatomic) NSString videoid;
@property (nonatomic) q duration;
@property (nonatomic) NSString groupid;
@property (nonatomic) NSDictionary cover;
@property (nonatomic) NSString type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupid;
- (id)videoid;
- (id)cover;
- (double)effectivePlayTime;
- (id)effectivePlayTrackUrlList;
- (id)playTrackUrlList;
- (id)playoverTrackUrlList;
- (void)setCover:;
- (void)setEffectivePlayTime:;
- (void)setEffectivePlayTrackUrlList:;
- (void)setGroupid:;
- (void)setPlayTrackUrlList:;
- (void)setPlayoverTrackUrlList:;
- (void)setVideoModel:;
- (void)setVideoid:;
- (id)videoModel;
- (id)initWithDictionary:error:;
- (void)setType:;
- (void)setWidth:;
- (long long)height;
- (void)setDuration:;
- (long long)width;
- (id)type;
- (void)setHeight:;
- (void).cxx_destruct;
- (long long)duration;
@end
