@interface MMCSRequestorContext : NSObject
@property (nonatomic) MMCSEngine engine;
@property (nonatomic) NSInteger type;
@property (nonatomic) Q count;
@property (nonatomic) ^Q itemIDs;
@property (nonatomic) ^I itemFlags;
@property (nonatomic) ^* signatures;
@property (nonatomic) ^* authTokens;
- (void)setCount:;
- (id)signatures;
- (id)engine;
- (void)setEngine:;
- (void)dealloc;
- (void)setType:;
- (id)authTokens;
- (void)setAuthTokens:;
- (int)type;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)itemFlags;
- (id)itemIDs;
- (void)setItemIDs:;
- (void)setItemFlags:;
- (id)initWithEngine:type:;
- (void)setSignatures:;
+ (id)contextWithEngine:type:;
@end
