@interface AWEPaidStreamControlConfig : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIView belowView;
@property (nonatomic) UIView aboveView;
@property (nonatomic) q subviewIndex;
@property (nonatomic) UIView trialContainerView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} blockViewFrame;
@property (nonatomic) BOOL needsShowPurchaseButton;
@property (nonatomic) BOOL needsStopForEnteringBackground;
@property (nonatomic) BOOL needsStopForResigningActive;
@property (nonatomic) BOOL forbidBlock;
@property (nonatomic) BOOL forbidSecurity;
@property (nonatomic) NSString referString;
@property (nonatomic) double offsetFromCenter;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) q enlargeType;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)enterFrom;
- (void)setEnlargeType:;
- (long long)enlargeType;
- (void)setNeedsShowPurchaseButton:;
- (void)setForbidSecurity:;
- (void)setTrialContainerView:;
- (id)trialContainerView;
- (BOOL)forbidBlock;
- (void)setForbidBlock:;
- (BOOL)forbidSecurity;
- (id)belowView;
- (void)setBelowView:;
- (id)aboveView;
- (void)setAboveView:;
- (long long)subviewIndex;
- (void)setSubviewIndex:;
- (id)blockViewFrame;
- (void)setBlockViewFrame:;
- (BOOL)needsShowPurchaseButton;
- (BOOL)needsStopForEnteringBackground;
- (void)setNeedsStopForEnteringBackground:;
- (BOOL)needsStopForResigningActive;
- (void)setNeedsStopForResigningActive:;
- (double)offsetFromCenter;
- (void)setOffsetFromCenter:;
- (id)init;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
