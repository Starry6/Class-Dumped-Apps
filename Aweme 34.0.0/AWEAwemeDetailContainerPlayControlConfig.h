@interface AWEAwemeDetailContainerPlayControlConfig : NSObject
@property (nonatomic) BOOL enableUserProfilePostAutoPlay;
@property (nonatomic) BOOL shouldShowCoverWhenFirstPlaySeekToTime;
- (BOOL)enableUserProfilePostAutoPlay;
- (void)setEnableUserProfilePostAutoPlay:;
- (BOOL)shouldShowCoverWhenFirstPlaySeekToTime;
- (void)setShouldShowCoverWhenFirstPlaySeekToTime:;
@end
