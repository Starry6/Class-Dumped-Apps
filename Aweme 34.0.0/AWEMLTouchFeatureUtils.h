@interface AWEMLTouchFeatureUtils : NSObject
@property (nonatomic) <AWEOHRServiceManager> OHRServiceManager;
- (id)OHRServiceManager;
- (id)getTouchHotArea;
- (BOOL)isCrossedHands;
- (id)getSlideSpeed;
- (id)getTouchLength;
- (long long)getTouchAreaIndex;
- (void)setOHRServiceManager:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
