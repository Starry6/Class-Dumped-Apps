@interface AXMScreenRecognitionCenter : NSObject
- (id)_processVisionResult:options:coagulator:;
- (id)processFeatures:;
+ (id)sharedInstance;
@end
