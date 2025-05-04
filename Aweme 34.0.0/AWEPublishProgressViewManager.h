@interface AWEPublishProgressViewManager : NSObject
@property (nonatomic) AWEPublishProgressView progressView;
- (id)progressView;
- (void)clear;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
