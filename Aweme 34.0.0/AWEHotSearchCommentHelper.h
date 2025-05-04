@interface AWEHotSearchCommentHelper : NSObject
+ (void)trackEvent:withParams:buttonType:tabType:;
+ (void)sendXBridgeEvent:withParams:;
+ (id)getCommentGeneralItemModelWithCardModel:hotSpotID:keyWord:params:;
+ (id)showCommentReplyTreeWithCardModel:needInput:insertIDs:referString:hotSpotID:keyWord:params:needCustomCommentVC:;
+ (id)p_generateCommentVC:commentID:referString:;
+ (id)getCommentGeneralItemModelWithCardModel:hotSpotID:keyWord:;
+ (id)showCommentReplyTreeWithCardModel:needInput:insertIDs:referString:hotSpotID:keyWord:;
+ (id)showCommentReplyTreeWithCardModel:needInput:insertIDs:referString:hotSpotID:keyWord:params:;
@end
