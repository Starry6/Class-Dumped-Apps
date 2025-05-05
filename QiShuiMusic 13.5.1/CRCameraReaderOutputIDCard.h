@interface CRCameraReaderOutputIDCard : CRCameraReaderOutput
@property (nonatomic) UIImage imageValue;
@property (nonatomic) NSArray vertices;
@property (nonatomic) NSArray targetVertices;
@property (nonatomic) NSString capturePath;
- (id)vertices;
- (id)imageValue;
- (id)targetVertices;
- (id)capturePath;
@end
