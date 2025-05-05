@interface ByteRTCExpressionDetectResult : NSObject
@property (nonatomic) NSInteger detectResult;
@property (nonatomic) NSInteger faceCount;
@property (nonatomic) NSArray detectInfo;
- (int)detectResult;
- (void)setDetectResult:;
- (id)detectInfo;
- (void)setDetectInfo:;
- (void).cxx_destruct;
- (int)faceCount;
- (void)setFaceCount:;
@end
