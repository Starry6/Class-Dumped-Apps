@interface CLIntersiloServiceMock : CLIntersiloService
@property (nonatomic) NSMutableDictionary keyedPayloads;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)endService;
- (void)beginService;
- (void).cxx_destruct;
- (void)setPayload:forSelector:;
- (void)setPayload:forKey:;
- (void)removePayloadForSelector:;
- (void)removePayloadForKey:;
- (id)syncgetPayloadForSelector:;
- (id)syncgetPayloadForKey:;
- (id)getPayloadForKey:;
- (id)getPayloadForSelector:;
- (id)keyedPayloads;
- (void)setKeyedPayloads:;
@end
