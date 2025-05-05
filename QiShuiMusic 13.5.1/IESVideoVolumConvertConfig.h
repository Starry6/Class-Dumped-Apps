@interface IESVideoVolumConvertConfig : NSObject
@property (nonatomic) q type;
@property (nonatomic) Q pointsCount;
@property (nonatomic) HTSVideoData videoData;
- (void)setPointsCount:;
- (void)setVideoData:;
- (id)videoData;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (unsigned long long)pointsCount;
@end
