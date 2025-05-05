@interface TMPasteboardCacheStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needUpdate:cacheStore:;
+ (id)generate:;
@end
