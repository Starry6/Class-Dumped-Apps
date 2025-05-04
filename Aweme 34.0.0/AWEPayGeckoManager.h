@interface AWEPayGeckoManager : NSObject
@property (nonatomic) AWEGeckoCDNManager manager;
- (void)setManager:;
- (id)init;
- (id)manager;
- (void).cxx_destruct;
+ (id)resoutceDirectoryForChannel:;
+ (id)dataForPath:channel:;
+ (id)imageForPath:channel:;
+ (id)imageWithContentsOfFile:channel:;
+ (id)imageForPath:channel:size:;
+ (id)shareInstance;
@end
