@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isExplicitUserAction;
- (BOOL)isNetworkAccessAllowed;
- (long long)videoVersion;
- (BOOL)restrictToPlayableOnCurrentDevice;
- (long long)videoDeliveryMode;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)isStreamingAllowed;
- (BOOL)hasValidTimeRange;
- (id)initWithStreamingAllowed:;
@end
