@interface TSPKDelayDetectModel : NSObject
@property (nonatomic) double detectTimeDelay;
@property (nonatomic) BOOL isAnchorPageCheck;
@property (nonatomic) BOOL isCancelPrevDetectWhenStartNewDetect;
- (double)detectTimeDelay;
- (BOOL)isAnchorPageCheck;
- (BOOL)isCancelPrevDetectWhenStartNewDetect;
- (void)setDetectTimeDelay:;
- (void)setIsAnchorPageCheck:;
- (void)setIsCancelPrevDetectWhenStartNewDetect:;
@end
