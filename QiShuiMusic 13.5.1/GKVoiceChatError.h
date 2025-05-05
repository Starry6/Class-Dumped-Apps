@interface GKVoiceChatError : NSObject
+ (BOOL)getNSError:code:detailedCode:returnCode:filePath:description:reason:;
+ (BOOL)getNSError:code:detailedCode:filePath:description:reason:;
@end
