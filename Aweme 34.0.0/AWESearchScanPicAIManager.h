@interface AWESearchScanPicAIManager : NSObject
- (void)updateBusiness;
- (id)dealWithResult:oriImage:;
- (id)getQuestionDetectResultWithImage:;
- (id)getPicOrientationAdjustResultWithImage:;
- (id)init;
@end
