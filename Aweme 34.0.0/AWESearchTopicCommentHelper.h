@interface AWESearchTopicCommentHelper : NSObject
+ (id)openCommentPanel:commentInfo:insertReplyCids:attachObject:logExtra:;
+ (id)openCommentPanel:commentInfo:insertReplyCids:attachObject:logExtra:dataModel:;
+ (id)getGeneralItemForTopicCommentCardModelForTopic:commentInfo:;
+ (id)openCommentPanelForTopic:commentGeneralModel:insertReplyCids:attachObject:logExtra:;
+ (id)getGeneralItemForTopicCommentCardModel:;
@end
