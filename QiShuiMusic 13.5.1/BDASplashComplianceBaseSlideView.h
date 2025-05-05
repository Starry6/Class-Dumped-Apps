@interface BDASplashComplianceBaseSlideView : BDASplashComplianceBaseView
@property (nonatomic) Q slideDirection;
@property (nonatomic) double slideDistance;
- (void)basePanGesture:;
- (BOOL)enableSlide:;
- (void)setSlideDirection:;
- (void)setSlideDistance:;
- (unsigned long long)slideDirection;
- (double)slideDistance;
- (void)splashTrackNoAdEventWithGesture:isValid:;
- (void)splashValidClickWithPoint:;
@end
