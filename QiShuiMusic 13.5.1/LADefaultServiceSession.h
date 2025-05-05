@interface LADefaultServiceSession : NSObject
@property (nonatomic) NSUUID sessionID;
@property (nonatomic) NSString serviceType;
@property (nonatomic) <LAService> service;
@property (nonatomic) NSString clientID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sessionID;
- (void)dealloc;
- (id)serviceType;
- (id)service;
- (void).cxx_destruct;
- (id)clientID;
- (id)initWithService:serviceType:client:;
@end
