@interface CLSBlob : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSData data;
- (id)data;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (int)type;
- (void).cxx_destruct;
- (void)setData:;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithType:data:;
- (BOOL)isEqual:;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
