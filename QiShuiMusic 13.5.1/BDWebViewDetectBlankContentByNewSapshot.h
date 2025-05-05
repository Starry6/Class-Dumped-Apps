@interface BDWebViewDetectBlankContentByNewSapshot : NSObject
@property (nonatomic) BOOL needOldSapshotDetect;
@property (nonatomic) BOOL needNewSapshotDetect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)detectBlankWebView:needNonBlankRatio:imageCheckCompleteBlockV2:;
- (void)detectBlankWebView:completeBlock:;
- (void)detectBlankWebView:imageCheckCompleteBlock:;
- (BOOL)needNewSapshotDetect;
- (BOOL)needOldSapshotDetect;
- (void)setNeedNewSapshotDetect:;
- (void)setNeedOldSapshotDetect:;
- (id)init;
@end
