@interface BDXSubContext : NSObject
- (void)mergeContext:shouldOverride:;
+ (id)mergeArray:to:override:;
+ (id)mergeDict:to:override:;
+ (id)mergeProp:to:override:;
+ (id)mergeTable:to:override:;
@end
