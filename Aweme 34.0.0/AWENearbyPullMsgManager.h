@interface AWENearbyPullMsgManager : NSObject
- (void)trackEventOfByteSyncWithErrMsg:rcvdType:linkType:noticeType:bizType:;
- (BOOL)hadDuplicateWithMsg:;
- (id)cacheDictWithLogid:noticeType:bizId:;
- (id)removeCacheMessageWithArray:;
- (void)tryToCacheMsgWithArray:;
- (BOOL)duplicateWithMsg:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
