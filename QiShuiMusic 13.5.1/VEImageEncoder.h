@interface VEImageEncoder : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSURL url;
@property (nonatomic) Q type;
- (void)appendImage:withDuration:;
- (void)appendImageRef:withDuration:;
- (id)initWithType:frames:exportFilePath:;
- (id)initWithType:frames:loopCount:exportFilePath:;
- (id)filePath;
- (id)url;
- (void)cancel;
- (void)dealloc;
- (void)setType:;
- (void)setFilePath:;
- (void)setUrl:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)encode;
@end
