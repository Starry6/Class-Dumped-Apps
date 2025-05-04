@interface AWEDTOImportAICutData : MTLModel
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString aiCutId;
@property (nonatomic) q videoCount;
@property (nonatomic) NSString videoSrcLenList;
@property (nonatomic) NSString videoCutLenList;
@property (nonatomic) NSString videoCutStartTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aiCutId;
- (void)setAiCutId:;
- (id)videoSrcLenList;
- (void)setVideoSrcLenList:;
- (id)videoCutLenList;
- (void)setVideoCutLenList:;
- (id)videoCutStartTime;
- (void)setVideoCutStartTime:;
- (void)setVideoId:;
- (void).cxx_destruct;
- (id)videoId;
- (void)setVideoCount:;
- (long long)videoCount;
+ (id)JSONKeyPathsByPropertyKey;
@end
