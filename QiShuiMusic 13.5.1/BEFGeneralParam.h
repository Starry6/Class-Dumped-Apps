@interface BEFGeneralParam : NSObject
- (id)init;
+ (id)getParamByKey:;
+ (void)setCheckUrlCallback:;
+ (void)setHeaderCallback:;
+ (void)setParam:withKey:;
+ (void)setParamCallback:;
+ (void)setParams:;
@end
