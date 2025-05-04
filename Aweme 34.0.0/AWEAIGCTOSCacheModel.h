@interface AWEAIGCTOSCacheModel : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString tos;
@property (nonatomic) double timestamp;
- (id)initWithFilePath:tos:;
- (double)timestamp;
- (id)filePath;
- (void).cxx_destruct;
- (id)tos;
@end
