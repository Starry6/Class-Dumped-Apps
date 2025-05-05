@interface MFRangedDataFilter : MFBaseFilterDataConsumer
@property (nonatomic) {_NSRange=QQ} range;
- (long long)appendData:;
- (void)setRange:;
- (id)range;
+ (id)rangedFilterWithConsumer:range:;
+ (id)rangedFilterWithConsumers:range:;
@end
