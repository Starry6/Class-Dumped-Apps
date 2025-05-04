@interface AWESearchResultPageContextStore : NSObject
@property (nonatomic) NSMapTable store;
- (id)init;
- (id)store;
- (void)setStore:;
- (void).cxx_destruct;
+ (id)fetchContextWithPage:;
+ (void)registerPage:withContext:;
+ (id)sharedStore;
@end
