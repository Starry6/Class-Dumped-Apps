@interface MRProtocolMessageOptions : NSObject
@property (nonatomic) q priority;
@property (nonatomic) BOOL waking;
- (void)setPriority:;
- (void)setWaking:;
- (long long)priority;
- (BOOL)isWaking;
@end
