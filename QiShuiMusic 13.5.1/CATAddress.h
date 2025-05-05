@interface CATAddress : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString address;
@property (nonatomic) BOOL any;
@property (nonatomic) BOOL localWiFi;
- (BOOL)isEqualToAddress:;
- (id)init;
- (id)data;
- (id)initWithString:;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (BOOL)isEqual:;
- (BOOL)isAny;
- (BOOL)isLocalWiFi;
+ (id)any;
+ (id)localWiFi;
@end
