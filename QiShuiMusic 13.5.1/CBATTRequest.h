@interface CBATTRequest : NSObject
@property (nonatomic) CBCharacteristic characteristic;
@property (nonatomic) NSNumber transactionID;
@property (nonatomic) BOOL ignoreResponse;
@property (nonatomic) CBCentral central;
@property (nonatomic) Q offset;
@property (nonatomic) NSData value;
- (id)transactionID;
- (unsigned long long)endOffset;
- (unsigned long long)offset;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)characteristic;
- (void)setCharacteristic:;
- (id)central;
- (id)initWithCentral:characteristic:offset:transactionID:;
- (void)appendValueData:;
- (BOOL)ignoreResponse;
- (void)setIgnoreResponse:;
@end
