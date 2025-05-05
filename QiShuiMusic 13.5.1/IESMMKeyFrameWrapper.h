@interface IESMMKeyFrameWrapper : NSObject
@property (nonatomic) NSString keyFrameJsonString;
@property (nonatomic) Q keyFramePts;
@property (nonatomic) NSString videoTrackID;
- (void)setKeyFramePts:;
- (id)keyFrameJsonString;
- (unsigned long long)keyFramePts;
- (void)setKeyFrameJsonString:;
- (void)setVideoTrackID:;
- (id)videoTrackID;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
