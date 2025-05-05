@interface EDReadLaterCloudStorageChangeElement : NSObject
@property (nonatomic) ECAngleBracketIDHash messageID;
@property (nonatomic) NSDate readLaterDate;
@property (nonatomic) NSDate displayDate;
- (id)messageID;
- (id)displayDate;
- (void).cxx_destruct;
- (id)readLaterDate;
- (id)initWithMessageID:readLaterDate:displayDate:;
@end
