@interface TSPKRuleCacheStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)convertEventDataToParams:source:;
- (BOOL)needUpdate:cacheStore:;
+ (id)generate:;
@end
