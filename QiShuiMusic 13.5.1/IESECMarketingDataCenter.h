@interface IESECMarketingDataCenter : NSObject
@property (nonatomic) NSMutableDictionary pageMap;
- (id)pageMap;
- (void)closeWithPage:rit:component:completion:;
- (void)getDataWithPage:rit:component:completion:;
- (id)getPageKeyWithVC:useDefault:;
- (id)getPageMetaWithKey:viewController:createIfNeeded:;
- (void)loadWithBuilder:completion:;
- (void)loadWithPage:data:completion:;
- (void)openWithPage:rit:component:customData:params:completion:;
- (void)openWithPage:rit:component:schema:params:completion:;
- (void)refreshPageMapIfNeeded;
- (void)removeWithPageVC:rit:component:completion:;
- (void)sendEventWithPageVC:rit:component:eventName:params:;
- (void)setPageMap:;
- (void)submitTaskWithData:taskConfig:extraData:completion:;
- (void)updateWithPage:rit:component:data:completion:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
