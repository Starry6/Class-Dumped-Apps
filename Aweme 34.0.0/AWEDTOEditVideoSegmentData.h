@interface AWEDTOEditVideoSegmentData : MTLModel
@property (nonatomic) NSString videoPath;
@property (nonatomic) AWEDTOVideoCutInfo videoCutInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoCutInfo;
- (void)setVideoCutInfo:;
- (void).cxx_destruct;
- (void)setVideoPath:;
- (id)videoPath;
+ (id)videoCutInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
