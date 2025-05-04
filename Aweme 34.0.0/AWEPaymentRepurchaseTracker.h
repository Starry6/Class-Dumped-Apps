@interface AWEPaymentRepurchaseTracker : NSObject
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWEPaymentRepurchaseModel repurchaseModel;
@property (nonatomic) q position;
- (id)referString;
- (void)setReferString:;
- (void)setLogExtra:;
- (id)logExtra;
- (void)trackWithEvent:params:;
- (id)repurchaseModel;
- (id)repurchaseCommonParams;
- (id)bizTypeIdentifier;
- (id)initWithModel:referString:logExtra:repurchaseModel:buttonPosition:;
- (void)trackRepurchaseButtonShowWithExtraDic:;
- (void)trackRepurchaseButtonClickWithExtraDic:;
- (void)trackCheckPurchaseButtonClickWithExtraDic:;
- (id)getMixId;
- (void)setRepurchaseModel:;
- (long long)position;
- (void).cxx_destruct;
- (void)setPosition:;
- (id)currentModel;
- (id)bizID;
- (void)setCurrentModel:;
- (id)currentEpisode;
@end
