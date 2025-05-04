@interface AWEAudioFile : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSURL cachedURL;
@property (nonatomic) NSString cachKey;
- (id)cachedURL;
- (id)initWithURL:cachedURL:;
- (id)cachKey;
- (void)setCachKey:;
- (id)initWithURL:;
- (id)URL;
- (void).cxx_destruct;
- (id)audioFileURL;
+ (id)fileWithURL:cachedURL:;
+ (id)fileWithURL:;
@end
