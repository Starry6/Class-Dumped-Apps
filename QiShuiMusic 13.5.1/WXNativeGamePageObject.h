@interface WXNativeGamePageObject : NSObject
@property (nonatomic) BOOL isVideo;
@property (nonatomic) I videoDuration;
@property (nonatomic) NSString shareData;
@property (nonatomic) NSData gameThumbData;
- (id)gameThumbData;
- (void)setGameThumbData:;
- (BOOL)isVideo;
- (unsigned int)videoDuration;
- (void).cxx_destruct;
- (void)setIsVideo:;
- (void)setVideoDuration:;
- (id)shareData;
- (void)setShareData:;
+ (id)object;
@end
