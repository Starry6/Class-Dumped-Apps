@interface AWEBindGuideStorageManager : NSObject
- (void)recordTaskStorage:uid:;
- (void)recordUidStorage:isRecordRedDotDismiss:;
- (void)recordRedDotShowTaskStorage:uid:;
- (void)recordRedDotClickTaskStorage:uid:enterFrom:;
- (id)storageKeyOfTaskId:uid:;
- (void)logForKey:message:;
- (id)storageKeyOfUid:;
- (id)storageOfTaskId:uid:;
- (id)storageOfUid:;
- (void)recordShowTaskId:uid:;
- (void)recordRedDotShowTaskId:uid:;
- (void)recordRedDotClickTaskId:uid:enterFrom:;
- (void)clearShowTaskId:uid:;
+ (id)shareManager;
@end
