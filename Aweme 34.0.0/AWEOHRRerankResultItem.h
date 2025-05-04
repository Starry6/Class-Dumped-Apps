@interface AWEOHRRerankResultItem : NSObject
@property (nonatomic) q fromIndex;
@property (nonatomic) q toIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)toIndex;
- (long long)fromIndex;
- (void)setFromIndex:;
- (void)setToIndex:;
+ (id)itemWithFromIndex:toIndex:;
@end
