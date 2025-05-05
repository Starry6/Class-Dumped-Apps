@interface CLIntersiloInterfaceSelectorInfo : NSObject
@property (nonatomic) : sel;
@property (nonatomic) NSInteger lastArgBlockIndex;
@property (nonatomic) NSInteger returnAddressIndex;
@property (nonatomic) NSMethodSignature sig;
@property (nonatomic) NSString typeStr;
- (int)lastArgBlockIndex;
- (SEL)sel;
- (int)returnAddressIndex;
- (id)sig;
- (id)typeStr;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:andMethodSignature:;
@end
