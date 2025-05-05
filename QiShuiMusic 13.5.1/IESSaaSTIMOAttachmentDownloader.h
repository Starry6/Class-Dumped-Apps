@interface IESSaaSTIMOAttachmentDownloader : NSObject
@property (nonatomic) IESSaaSTIMThreadSafeMutableDictionary filesToAlive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)downloadForFile:;
- (void)downloadRequest:didFailedWithError:;
- (void)downloadRequest:didSuccessWithInfo:;
- (void)downloadRequest:progressDidUpdate:;
- (id)filesToAlive;
- (void)setFilesToAlive:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
