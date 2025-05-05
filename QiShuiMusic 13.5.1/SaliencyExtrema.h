@interface SaliencyExtrema : NSObject
- (id)init;
- (void)updateExtrema:x:y:;
- (id)computeRectFromExtremaUsingThreshold:vImage:;
@end
