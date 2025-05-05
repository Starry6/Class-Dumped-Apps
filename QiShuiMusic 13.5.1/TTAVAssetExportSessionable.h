@interface TTAVAssetExportSessionable : AVAssetExportSession
@property (nonatomic) double progress;
@property (nonatomic) NSURL outputURL;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)start:;
- (double)progress;
@end
