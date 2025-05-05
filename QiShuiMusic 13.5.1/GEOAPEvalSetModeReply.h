@interface GEOAPEvalSetModeReply : GEOXPCReply
@property (nonatomic) BOOL previousEnabledState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (BOOL)previousEnabledState;
- (void)setPreviousEnabledState:;
@end
