@interface WBSLocalAssetController : NSObject
@property (nonatomic) <WBSMobileAssetControllerDelegate> delegate;
@property (nonatomic) NSDate lastUpdateDate;
@property (nonatomic) double updateInterval;
- (id)initWithURL:;
- (id)lastUpdateDate;
- (double)updateInterval;
- (void)setDelegate:;
- (void)setLastUpdateDate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)queryURL:;
@end
