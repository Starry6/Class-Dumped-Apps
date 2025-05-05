@interface CSUserActivityTuple : NSObject
@property (nonatomic) CSUserAction action;
@property (nonatomic) CSSearchableItem item;
@property (nonatomic) NSString protectionClass;
- (id)item;
- (id)initWithAction:item:;
- (void)setProtectionClass:;
- (id)action;
- (void)updateWithItem:;
- (id)protectionClass;
- (void)setAction:;
- (id)searchableItem;
- (void)setItem:;
- (void).cxx_destruct;
- (id)description;
@end
