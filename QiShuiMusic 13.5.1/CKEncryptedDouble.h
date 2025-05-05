@interface CKEncryptedDouble : CKEncryptedData
@property (nonatomic) double doubleValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)doubleValue;
- (id)initWithDouble:;
- (id)value;
@end
