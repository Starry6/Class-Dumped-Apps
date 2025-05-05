@interface IESECCommentBizTracker : NSObject
@property (nonatomic) IESECGoodsCommentContext context;
- (id)commonParamsDic;
- (id)bigPicTrackerDic:trackContext:;
- (id)commentModuleWithDataType:detailModel:;
- (id)commentRankWithDetailModel:index:originCommentCount:;
- (id)isSameCommentWithDetailModel:dataType:;
- (id)mediaModeViewTrackerDic:;
- (void)trackBigPicCommentShow:;
- (void)trackBigPicSwitchClick:;
- (void)trackClickCommentLike:trackContext:;
- (void)trackClickImpression:index:trackContext:;
- (void)trackCommentContentExit:;
- (void)trackCommentContentExit:trackContext:;
- (void)trackCommentContentShow:;
- (void)trackCommentTagAlertClick:index:type:clickArea:trackContext:;
- (void)trackCommentTagClick:index:type:trackContext:;
- (void)trackCommentTagShow:index:trackContext:;
- (void)trackPostOrderButtonClick:;
- (void)trackPostOrderButtonShowOfModel:;
- (id)trackTagParamsDic:index:tagType:trackContext:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
