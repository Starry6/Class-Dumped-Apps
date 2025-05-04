@interface AWEPaySKMVoiceBroadcastCache : NSObject
@property (nonatomic) NSString amountStr;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSData data;
@property (nonatomic) AWEPaySKMVoiceBroadcastCache prev;
@property (nonatomic) AWEPaySKMVoiceBroadcastCache next;
- (void)setAmountStr:;
- (id)amountStr;
- (id)filePath;
- (id)next;
- (void)setNext:;
- (void)setPrev:;
- (void)setFilePath:;
- (void)setData:;
- (id)prev;
- (void).cxx_destruct;
- (id)data;
- (id)copyWithZone:;
@end
