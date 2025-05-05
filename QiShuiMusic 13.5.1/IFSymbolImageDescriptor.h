@interface IFSymbolImageDescriptor : NSObject
@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) Q symbolSize;
@property (nonatomic) q symbolWeight;
@property (nonatomic) q layoutDirection;
- (id)digest;
- (void)setSymbolSize:;
- (unsigned long long)symbolSize;
- (id)init;
- (void)setPointSize:;
- (double)pointSize;
- (void)setScale:;
- (unsigned long long)weight;
- (void)setWeight:;
- (void)setSymbolWeight:;
- (void)setLayoutDirection:;
- (long long)symbolWeight;
- (long long)layoutDirection;
- (double)scale;
- (void)setSize:;
- (id)copyWithZone:;
- (unsigned long long)size;
@end
