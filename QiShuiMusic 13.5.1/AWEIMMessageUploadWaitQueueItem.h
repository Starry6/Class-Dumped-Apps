@interface AWEIMMessageUploadWaitQueueItem : NSObject
@property (nonatomic) NSString fileID;
@property (nonatomic) q messageType;
@property (nonatomic) NSData quickData;
- (id)quickData;
- (void)setQuickData:;
- (void)setFileID:;
- (id)fileID;
- (long long)messageType;
- (void).cxx_destruct;
- (void)setMessageType:;
@end
