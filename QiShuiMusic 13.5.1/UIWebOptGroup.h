@interface UIWebOptGroup : NSObject
@property (nonatomic) q offset;
@property (nonatomic) <UIWebSelectedItemPrivate> group;
@property (nonatomic) NSArray options;
- (void)setOptions:;
- (void)dealloc;
- (void)setGroup:;
- (long long)offset;
- (id)group;
- (id)options;
- (id)initWithGroup:itemOffset:;
@end
