@interface SecCBORValue : NSObject
@property (nonatomic) NSInteger fieldType;
@property (nonatomic) C fieldValue;
- (void)write:;
- (unsigned char)fieldValue;
- (int)fieldType;
- (void)encodeStartItems:output:;
- (void)setAdditionalInformation:item2:output:;
- (void)setUint:item2:output:;
- (unsigned long long)getNumUintBytes:;
@end
