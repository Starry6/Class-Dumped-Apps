@interface CUWriteRequest : NSObject
@property (nonatomic) ^{iovec=^vQ} bytesIOArray;
@property (nonatomic) Q bytesIOCount;
@property (nonatomic) Q bytesIOMaxCount;
@property (nonatomic) @? completion;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) BOOL endOfData;
@property (nonatomic) NSError error;
@property (nonatomic) * messageUUID;
@property (nonatomic) BOOL hasMessageUUID;
- (id)completion;
- (void)setCompletion:;
- (id)init;
- (char *)messageUUID;
- (id)error;
- (void).cxx_destruct;
- (id)dataArray;
- (BOOL)hasMessageUUID;
- (void)setHasMessageUUID:;
- (id)bytesIOArray;
- (unsigned long long)bytesIOCount;
- (void)setBytesIOCount:;
- (unsigned long long)bytesIOMaxCount;
- (void)setDataArray:;
- (BOOL)endOfData;
- (void)setEndOfData:;
@end
