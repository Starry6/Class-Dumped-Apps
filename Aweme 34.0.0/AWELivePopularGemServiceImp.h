@interface AWELivePopularGemServiceImp : NSObject
@property (nonatomic) BOOL isShowingXiaoDian;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)monitorDouPlusLiveShowWithURLString:webViewError:;
- (void)openLivePopularGemWithUrlPath:params:isAnchor:backBaseView:;
- (void)track:status:extra:;
- (id)getCommonParamsWith:context:;
- (void)tapToolBarItemWith:context:;
- (void)tapToolBarItemWith:context:externalParams:;
- (BOOL)isShowingXiaoDian;
- (void)setIsShowingXiaoDian:;
- (void)openLivePopularGemWithUrlPath:params:isAnchor:backBaseView:externalParams:;
@end
