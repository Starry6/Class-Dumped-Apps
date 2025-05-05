@interface CSJSize : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
- (id)csj_dictionaryValue;
- (BOOL)isMemberOfClass:;
- (void)setWidth:;
- (id)dictionaryValue;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (BOOL)isKindOfClass:;
+ (id)sizeBy:;
@end
