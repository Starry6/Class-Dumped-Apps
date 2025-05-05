@interface PKVectorTimestampElement : NSObject
@property (nonatomic) Q clock;
@property (nonatomic) Q subclock;
- (void)setClock:;
- (unsigned long long)clock;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (unsigned long long)subclock;
- (void)setSubclock:;
@end
