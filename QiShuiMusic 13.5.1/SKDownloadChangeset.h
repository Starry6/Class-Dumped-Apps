@interface SKDownloadChangeset : NSObject
@property (nonatomic) NSNumber contentLength;
@property (nonatomic) NSURL contentURL;
@property (nonatomic) NSNumber downloadID;
@property (nonatomic) NSNumber downloadState;
@property (nonatomic) NSError error;
@property (nonatomic) NSNumber progress;
@property (nonatomic) NSNumber timeRemaining;
- (void)setDownloadState:;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)setContentLength:;
- (void)setError:;
- (void)setProgress:;
- (id)error;
- (id)contentURL;
- (id)progress;
- (id)timeRemaining;
- (void).cxx_destruct;
- (id)contentLength;
- (id)downloadState;
- (id)copyWithZone:;
- (void)setContentURL:;
- (id)downloadID;
- (void)setTimeRemaining:;
- (void)setDownloadID:;
+ (id)changesetWithDownloadID:state:;
@end
