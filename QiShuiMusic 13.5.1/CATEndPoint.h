@interface CATEndPoint : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) CATAddress address;
@property (nonatomic) I port;
- (id)init;
- (id)data;
- (unsigned int)port;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (BOOL)isEqual:;
- (id)initWithAddress:port:;
- (BOOL)isEqualToEndPoint:;
@end
