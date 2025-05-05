@interface IESSaaSTIMMessageNewPropertyModify : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString idempotentID;
@property (nonatomic) NSString value;
@property (nonatomic) Q type;
- (id)idempotentID;
- (void)setIdempotentID:;
- (id)key;
- (void)setType:;
- (void)setKey:;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)value;
@end
