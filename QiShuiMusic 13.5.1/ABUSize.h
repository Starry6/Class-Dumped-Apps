@interface ABUSize : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
- (id)csj_dictionaryValue;
- (void)setWidth:;
- (id)dictionaryValue;
- (long long)height;
- (long long)width;
- (void)setHeight:;
+ (id)sizeBy:;
@end
