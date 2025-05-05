@interface ContactFolderItemsSyncContext : NSObject
@property (nonatomic) NSInteger abPersonChangeId;
@property (nonatomic) NSInteger abGroupChangeId;
@property (nonatomic) BOOL changeHistoryTruncated;
@property (nonatomic) Q latestSequenceNumber;
@property (nonatomic) CNChangeHistoryAnchor cnChangeAnchor;
- (void)setAbPersonChangeId:;
- (id)init;
- (BOOL)isChangeHistoryTruncated;
- (void)setLatestSequenceNumber:;
- (void)setCnChangeAnchor:;
- (void)setChangeHistoryTruncated:;
- (int)abPersonChangeId;
- (void).cxx_destruct;
- (id)cnChangeAnchor;
- (void)setAbGroupChangeId:;
- (unsigned long long)latestSequenceNumber;
- (int)abGroupChangeId;
@end
