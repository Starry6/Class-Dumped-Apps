@interface AWEDCFeedCommonLynxCardController : AWEDCFeedBaseController
@property (nonatomic) q reqOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sectionControllerWillEnterWorkingRange:;
- (void)onFetchListDataEndWithReason:response:error:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (id)customRequestParams:requestInfo:;
- (BOOL)isSpecialCard:;
- (id)classNameWithReferString;
- (void)setReqOffset:;
- (long long)reqOffset;
@end
