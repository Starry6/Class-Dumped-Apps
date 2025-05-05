@interface FLEXProtocolBuilder : NSObject
@property (nonatomic) Protocol workingProtocol;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isRegistered;
- (id)init;
- (id)initWithProtocol:;
- (id)description;
- (void)addProperty:isRequired:;
- (void)addMethod:typeEncoding:isRequired:isInstanceMethod:;
- (void)addProtocol:;
- (id)registerProtocol;
- (BOOL)isRegistered;
- (id)workingProtocol;
- (void)setWorkingProtocol:;
- (id)name;
- (void)setName:;
- (void).cxx_destruct;
+ (id)allocateProtocol:;
@end
