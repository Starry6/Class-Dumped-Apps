@interface AWEConcernSpecialFollowContext : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q entrancePosition;
@property (nonatomic) BOOL showSpecialFollowSuccessToast;
@property (nonatomic) BOOL ignoreTrack;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) Q followPanelPosition;
- (void)setEnterFrom:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)enterFrom;
- (unsigned long long)entrancePosition;
- (id)initWithShowSuccessToast:enterFrom:entrancePosition:followPanelPosition:;
- (BOOL)showSpecialFollowSuccessToast;
- (BOOL)ignoreTrack;
- (unsigned long long)followPanelPosition;
- (void)setIgnoreTrack:;
- (void)setShowSpecialFollowSuccessToast:;
- (void)setEntrancePosition:;
- (void).cxx_destruct;
@end
