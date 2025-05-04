@interface AWEDCFeedBasicManager : NSObject
@property (nonatomic) NSInteger c2CardUIOptimizeStyle;
@property (nonatomic) double dcFeedImageBottomMargin;
@property (nonatomic) double dcFeedInfoBottomMargin;
@property (nonatomic) double dcFeedInfoLastBottomMargin;
@property (nonatomic) BOOL isPad;
- (double)dcFeedImageBottomMargin;
- (double)dcFeedInfoBottomMargin;
- (double)dcFeedInfoLastBottomMargin;
- (int)c2CardUIOptimizeStyle;
- (void)setC2CardUIOptimizeStyle:;
- (void)setDcFeedImageBottomMargin:;
- (void)setDcFeedInfoBottomMargin:;
- (void)setDcFeedInfoLastBottomMargin:;
- (id)init;
- (void)setIsPad:;
- (BOOL)isPad;
+ (id)sharedInstance;
@end
