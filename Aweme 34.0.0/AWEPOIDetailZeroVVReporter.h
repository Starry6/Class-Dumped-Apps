@interface AWEPOIDetailZeroVVReporter : NSObject
@property (nonatomic) NSDictionary lvMap;
@property (nonatomic) NSMutableDictionary lv1LynxCards;
@property (nonatomic) NSMutableDictionary lv2LynxCards;
@property (nonatomic) NSMutableDictionary lv3LynxCards;
@property (nonatomic) BOOL isFMPFinished;
- (void)markFMPFinished;
- (void)updateLynxView:loadingStatus:;
- (void)setLvMap:;
- (void)setLv1LynxCards:;
- (void)setLv2LynxCards:;
- (void)setLv3LynxCards:;
- (id)lv1LynxCards;
- (id)lv2LynxCards;
- (id)lv3LynxCards;
- (void)setIsFMPFinished:;
- (id)getStatusStringForLv:;
- (id)errorAndLoadingCardsForLv:;
- (BOOL)isFMPFinished;
- (unsigned long long)getStatusForLv:;
- (id)lvMap;
- (void)report;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setupMap;
@end
