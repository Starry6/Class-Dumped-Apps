@interface AWEConsumerDownloadBlockList : NSObject
+ (id)downloadBlockList;
+ (id)generateDownloadBlockList;
+ (id)downloadBlockListHiddenCommon;
+ (id)downloadBlockListHiddenLocal;
+ (id)downloadBlockListGrayedCommon;
+ (id)downloadBlockListGrayedLocal;
+ (BOOL)isControlledByPreventDownload:;
+ (BOOL)isControlledByPreventDownloadType:;
+ (BOOL)isNotAuthor:;
+ (BOOL)forbidByAllowDownload:;
+ (BOOL)authorIsPrivateAccount:;
+ (id)downloadActionWithContext:;
+ (void)actionWithContext:;
@end
