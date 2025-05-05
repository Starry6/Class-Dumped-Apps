@interface BDHybridAPIContext : NSObject
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSString apiName;
@property (nonatomic) NSString namescope;
@property (nonatomic) NSString moduleName;
@property (nonatomic) NSString apiType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)namescope;
- (void)setModuleName:;
- (void)setNamescope:;
- (void)setSessionId:;
- (id)sessionId;
- (id)initWithCoder:;
- (id)moduleName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setApiName:;
- (void)setApiType:;
- (id)apiType;
- (id)toDict;
- (id)apiName;
+ (id)createFromBridgeName:;
+ (id)createFromBridgeName:session:;
+ (id)createFromOtherAPI:;
@end
