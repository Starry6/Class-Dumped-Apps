@interface AWEIMIncentiveChatScanGroupConvFromDBConfig : NSObject
@property (nonatomic) q lastSortOrder;
@property (nonatomic) q queryCount;
@property (nonatomic) NSMutableSet availableGroupChat;
@property (nonatomic) double scanBeginTime;
@property (nonatomic) double appendTimeInterval;
@property (nonatomic) Q appendTimes;
@property (nonatomic) Q appendChatCount;
@property (nonatomic) Q pageCount;
- (long long)lastSortOrder;
- (void)setLastSortOrder:;
- (void)setQueryCount:;
- (id)availableGroupChat;
- (void)setAvailableGroupChat:;
- (double)scanBeginTime;
- (void)setScanBeginTime:;
- (double)appendTimeInterval;
- (void)setAppendTimeInterval:;
- (unsigned long long)appendTimes;
- (void)setAppendTimes:;
- (unsigned long long)appendChatCount;
- (void)setAppendChatCount:;
- (unsigned long long)pageCount;
- (id)init;
- (void)setPageCount:;
- (void).cxx_destruct;
- (long long)queryCount;
@end
