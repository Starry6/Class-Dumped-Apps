@interface AWEIMMessageCombineShareDataManager : NSObject
+ (void)fetchCombineShareDetailInfoWithRequest:completeBlock:;
+ (void)p_getDBMessageListWithRequestSubMessageList:conversationId:messageList:completBlock:;
+ (id)p_getLocalUsableMessageWithSubMessageList:combineShareMessage:preferDegrade:ignoreUsable:;
+ (id)filterNeedRequestMsgServerIdList:resultMessages:;
+ (id)getInlineMsg:needRequestMsgServerIdList:;
+ (void)storeContentMessages:withRequest:message:;
+ (void)getDownloadMsg:needRequestMsgServerIdList:completeBlock:;
+ (void)requestWithCompletion:infoRequest:message:realRequest:subMessageList:;
+ (id)convertMsgDictToContentMsg:withParentCombineMsg:;
+ (long long)getMsgStatusFromExtDict:withCurrentStatus:;
+ (void)tryDeleteFileAtPath:;
+ (id)convertMsgInfoArrToContentMsgArr:withParentCombineMsg:;
+ (void)downloadMsgFromURL:withInfoRequest:downloadURI:completeBlock:;
+ (void)requestURI:withAccessChain:message:requestCompletionBlock:;
+ (id)convertContentMsgToIMMsg:withParentCombineMsg:subMsg:preferDegrade:ignoreUsable:;
@end
