@interface CUReadRequest : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) ^v bufferBytes;
@property (nonatomic) NSMutableData bufferData;
@property (nonatomic) @? completion;
@property (nonatomic) NSError error;
@property (nonatomic) Q length;
@property (nonatomic) Q minLength;
@property (nonatomic) Q maxLength;
@property (nonatomic) * messageUUID;
@property (nonatomic) BOOL hasMessageUUID;
@property (nonatomic) I statusFlags;
- (id)completion;
- (void)setCompletion:;
- (void)setStatusFlags:;
- (char *)messageUUID;
- (id)data;
- (unsigned long long)maxLength;
- (void)setMaxLength:;
- (id)error;
- (unsigned long long)minLength;
- (void).cxx_destruct;
- (void)setMinLength:;
- (unsigned int)statusFlags;
- (void)setData:;
- (unsigned long long)length;
- (id)bufferBytes;
- (void)setBufferBytes:;
- (id)bufferData;
- (void)setBufferData:;
- (BOOL)hasMessageUUID;
- (void)setHasMessageUUID:;
@end
