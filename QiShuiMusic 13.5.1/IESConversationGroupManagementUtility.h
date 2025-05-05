@interface IESConversationGroupManagementUtility : NSObject
+ (void)asyncGetGroupManagementInfoWithIdentifier:completion:;
+ (id)groupManagementInfoForIdentifier:;
+ (id)processQueue;
@end
