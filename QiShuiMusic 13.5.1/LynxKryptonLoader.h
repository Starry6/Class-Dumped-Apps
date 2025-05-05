@interface LynxKryptonLoader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadURL:withStreamLoadDelegate:;
- (id)findLynxView;
- (id)initWithLynxInstanceId:;
- (id)loadImageData:;
- (void)loadURL:callback:;
- (id)redirectURL:;
- (void)reportLoaderTrackEvent:format:data:;
- (void)setRuntimeId:;
+ (void)loadURLFallback:callback:;
@end
