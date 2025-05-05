@interface CSJAPIClientConfiguration : NSObject
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) NSString requestURL;
@property (nonatomic) q reqType;
@property (nonatomic) NSDictionary requestDictionary;
@property (nonatomic) NSDictionary slotParams;
@property (nonatomic) NSString reqeustID;
@property (nonatomic) BOOL isAggSessionRequest;
- (long long)reqType;
- (id)adSlot;
- (BOOL)isAggSessionRequest;
- (id)reqeustID;
- (void)setAdSlot:;
- (void)setIsAggSessionRequest:;
- (void)setReqType:;
- (void)setReqeustID:;
- (void)setSlotParams:;
- (id)slotParams;
- (id)requestURL;
- (void)setRequestURL:;
- (void).cxx_destruct;
- (id)requestDictionary;
- (void)setRequestDictionary:;
@end
