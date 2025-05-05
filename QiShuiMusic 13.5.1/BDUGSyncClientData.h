@interface BDUGSyncClientData : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString did;
@property (nonatomic) NSString uid;
@property (nonatomic) double ts;
@property (nonatomic) NSString topicID;
@property (nonatomic) q cursor;
- (void)setDid:;
- (id)did;
- (id)initWithSynclog:;
- (long long)cursor;
- (double)ts;
- (id)uid;
- (id)data;
- (void)setTopicID:;
- (void)setUid:;
- (id)topicID;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setTs:;
@end
