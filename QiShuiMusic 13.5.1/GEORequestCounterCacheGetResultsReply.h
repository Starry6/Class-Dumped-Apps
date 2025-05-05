@interface GEORequestCounterCacheGetResultsReply : GEOXPCReply
@property (nonatomic) NSArray results;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (id)results;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setResults:;
@end
