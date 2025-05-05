@interface UIWebPDFLabelView : UIView
@property (nonatomic) BOOL timerInstalled;
@property (nonatomic) Q currentPageIndex;
- (void)sizeToFit;
- (void)setCurrentPageIndex:;
- (void)clearTimer;
- (void)dealloc;
- (void)setText:;
- (unsigned long long)currentPageIndex;
- (id)initWithFrame:;
- (double)_fadeOutDuration;
- (void)fadeOut;
- (BOOL)isTimerInstalled;
- (double)_fadeOutDelay;
- (void)showNowInSuperView:atOrigin:withText:animated:;
- (void)_fadeOutAnimationDidStop;
- (void)_makeRoundedCorners;
@end
