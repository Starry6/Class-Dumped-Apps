@interface GEOThrottlerIsSafeReply : GEOXPCReply
@property (nonatomic) double nextSafeRequestTime;
@property (nonatomic) NSInteger availableRequestCount;
@property (nonatomic) GEODataRequestThrottlerToken throttlerToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (double)nextSafeRequestTime;
- (void)setNextSafeRequestTime:;
- (int)availableRequestCount;
- (void)setAvailableRequestCount:;
- (id)throttlerToken;
- (void)setThrottlerToken:;
@end
