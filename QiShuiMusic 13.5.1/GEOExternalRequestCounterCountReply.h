@interface GEOExternalRequestCounterCountReply : GEOXPCReply
@property (nonatomic) NSArray objects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (void)setObjects:;
- (id)initWithXPCDictionary:error:;
- (id)objects;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
