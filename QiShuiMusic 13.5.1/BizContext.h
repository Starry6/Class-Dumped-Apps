@interface BizContext : NSObject
- (id)getBizContextWithExBizContext:;
- (id)description;
+ (id)appendBizContextIntoOrderStr:;
+ (id)getBizContext;
+ (id)getBizContextDict;
@end
