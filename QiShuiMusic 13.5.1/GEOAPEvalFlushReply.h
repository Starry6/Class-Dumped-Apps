@interface GEOAPEvalFlushReply : GEOXPCReply
@property (nonatomic) BOOL currentEnabledState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (BOOL)currentEnabledState;
- (void)setCurrentEnabledState:;
@end
