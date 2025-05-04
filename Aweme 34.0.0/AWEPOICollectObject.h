@interface AWEPOICollectObject : NSObject
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) @ actionSender;
@property (nonatomic) NSDictionary loginTrackerInformation;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)setLoginTrackerInformation:;
- (void)doActionWithPOIID:awemeID:collect:needHintToast:extraParams:loginResult:completion:;
- (void)doActionWithPOIID:awemeID:collect:needHintToast:extraParams:customTracker:loginResult:completion:;
- (id)actionSender;
- (void)p_broadcastCollectStatus:poiID:;
- (id)loginTrackerInformation;
- (void)doActionWithPOIID:collect:needHintToast:extraParams:loginResult:completion:;
- (void)setActionSender:;
- (void).cxx_destruct;
@end
