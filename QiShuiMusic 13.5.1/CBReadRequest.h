@interface CBReadRequest : NSObject
@property (nonatomic) NSMutableData bufferData;
@property (nonatomic) NSData data;
@property (nonatomic) @? completion;
@property (nonatomic) NSError error;
@property (nonatomic) Q length;
@property (nonatomic) Q minLength;
@property (nonatomic) Q maxLength;
- (id)completion;
- (void)setCompletion:;
- (id)data;
- (unsigned long long)maxLength;
- (void)setMaxLength:;
- (id)error;
- (unsigned long long)minLength;
- (void).cxx_destruct;
- (void)setMinLength:;
- (void)setData:;
- (unsigned long long)length;
- (id)bufferData;
- (void)setBufferData:;
@end
