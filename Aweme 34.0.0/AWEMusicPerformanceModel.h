@interface AWEMusicPerformanceModel : AWEBaseApiModel
@property (nonatomic) q performanceId;
@property (nonatomic) NSString postURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString time;
@property (nonatomic) NSString location;
@property (nonatomic) NSString schema;
- (id)postURL;
- (long long)performanceId;
- (void)setPerformanceId:;
- (void)setPostURL:;
- (id)time;
- (id)schema;
- (void)setTime:;
- (void)setSchema:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
