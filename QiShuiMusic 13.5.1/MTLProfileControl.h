@interface MTLProfileControl : NSObject
@property (nonatomic) C uscCliqueTraceLevel;
@property (nonatomic) BOOL uscEmitPosition;
@property (nonatomic) BOOL uscEmitThreadControlFlow;
- (id)formattedDescription:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned char)uscCliqueTraceLevel;
- (void)setUscCliqueTraceLevel:;
- (BOOL)uscEmitPosition;
- (void)setUscEmitPosition:;
- (BOOL)uscEmitThreadControlFlow;
- (void)setUscEmitThreadControlFlow:;
@end
