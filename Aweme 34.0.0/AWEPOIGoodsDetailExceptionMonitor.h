@interface AWEPOIGoodsDetailExceptionMonitor : NSObject
@property (nonatomic) AWEGoodsDetailPageContext context;
@property (nonatomic) NSMutableDictionary commonParams;
@property (nonatomic) NSMutableDictionary commonNetworkParams;
@property (nonatomic) BOOL closeSlardarMonitor;
- (id)commonParams;
- (void)setCommonParams:;
- (void)recordMainExceptionWithEvent:error:params:;
- (void)updateAfterInfoRequestWithParams:response:error:;
- (void)recordOtherRequstExceptionWithPath:params:response:error:;
- (void)recordMainExceptionWithEvent:;
- (void)setCommonNetworkParams:;
- (void)setCloseSlardarMonitor:;
- (id)commonNetworkParams;
- (void)updateDetailEnterPage;
- (void)reporWithParams:event:fromRequest:;
- (void)recordMainExceptionWithEvent:error:;
- (BOOL)closeSlardarMonitor;
- (void)reportExceptionToHMDWithParams:event:fromRequest:;
- (void)reportAlogAndTeaWithParams:event:;
- (void)refresh;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
