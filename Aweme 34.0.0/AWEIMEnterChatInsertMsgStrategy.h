@interface AWEIMEnterChatInsertMsgStrategy : AWEBaseApiModel
@property (nonatomic) q exitStrategy;
@property (nonatomic) q showPosition;
@property (nonatomic) q preCheckMsgCount;
@property (nonatomic) q showTimes;
- (long long)showPosition;
- (long long)showTimes;
- (long long)exitStrategy;
- (long long)preCheckMsgCount;
+ (id)JSONKeyPathsByPropertyKey;
@end
