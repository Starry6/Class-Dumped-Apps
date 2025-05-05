@interface UgenV3EventHandler : NSObject
@property (nonatomic) NSString originString;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString function;
@property (nonatomic) NSDictionary params;
- (BOOL)isConvertAction;
- (id)ugenMessageName;
- (long long)eventHandlerType;
- (BOOL)isUgenUpdateEvent;
- (id)originString;
- (void)setOriginString:;
- (void)setScheme:;
- (id)scheme;
- (id)function;
- (id)initWithString:;
- (void)setFunction:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
