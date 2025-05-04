@interface AWEAdOrderCenterPopViewControlModel : MTLModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSNumber downloadNumber;
@property (nonatomic) double resetTime;
@property (nonatomic) NSMutableDictionary confirm;
- (id)downloadNumber;
- (void)setDownloadNumber:;
- (void)setUid:;
- (id)uid;
- (void)setResetTime:;
- (void).cxx_destruct;
- (double)resetTime;
- (id)confirm;
- (void)setConfirm:;
@end
