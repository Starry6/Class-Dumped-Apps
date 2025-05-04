@interface AWEPLVAutoPlayTracker : NSObject
@property (nonatomic) NSDictionary commonTrackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonTrackParams;
- (void)setCommonTrackParams:;
- (void)trackFavouriteVideo:isCancel:;
- (void)trackVideoPlayFinishWithLogExtraDict:;
- (void)trackFinishViewShowWithModel:;
- (void)trackFinishPaymentTrialEndWithModel:;
- (void).cxx_destruct;
@end
