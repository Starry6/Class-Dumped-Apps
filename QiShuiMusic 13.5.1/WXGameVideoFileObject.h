@interface WXGameVideoFileObject : NSObject
@property (nonatomic) NSData videoFileData;
@property (nonatomic) NSString videoUrl;
@property (nonatomic) NSString thumbUrl;
- (void)setThumbUrl:;
- (void)setVideoFileData:;
- (id)thumbUrl;
- (id)videoFileData;
- (void).cxx_destruct;
- (id)videoUrl;
- (void)setVideoUrl:;
+ (id)object;
@end
