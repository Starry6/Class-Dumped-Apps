@interface ByteRTCEncodedVideoFrame : NSObject
@property (nonatomic) q codecType;
@property (nonatomic) q pictureType;
@property (nonatomic) q timestampUs;
@property (nonatomic) q timestampDtsUs;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) q rotation;
@property (nonatomic) NSData data;
- (void)setPictureType:;
- (long long)pictureType;
- (long long)timestampUs;
- (void)setTimestampUs:;
- (long long)timestampDtsUs;
- (void)setTimestampDtsUs:;
- (id)data;
- (void)setWidth:;
- (void)setRotation:;
- (int)height;
- (int)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setData:;
- (long long)rotation;
- (long long)codecType;
- (void)setCodecType:;
@end
