@interface CBUUID : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString UUIDString;
- (id)data;
- (id)initWithString:;
- (unsigned long long)hash;
- (id)initWithString:safe:;
- (id)initWithNSUUID:;
- (id)initWithCFUUID:;
- (id)initWithData:;
- (id)UUIDString;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)UUIDWithData:;
+ (id)UUIDWithCFUUID:;
+ (id)UUIDWithNSUUID:;
+ (id)UUIDWithString:;
@end
