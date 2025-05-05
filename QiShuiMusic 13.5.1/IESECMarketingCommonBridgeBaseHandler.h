@interface IESECMarketingCommonBridgeBaseHandler : NSObject
@property (nonatomic) NSString action;
@property (nonatomic) BOOL needAddBtmToken;
- (BOOL)needAddBtmToken;
- (void)callWithPage:rit:component:params:data:completion:;
- (void)setNeedAddBtmToken:;
- (id)init;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
@end
