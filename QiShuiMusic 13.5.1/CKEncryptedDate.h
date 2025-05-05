@interface CKEncryptedDate : CKEncryptedData
@property (nonatomic) NSDate date;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDate:;
- (id)date;
- (id)value;
@end
