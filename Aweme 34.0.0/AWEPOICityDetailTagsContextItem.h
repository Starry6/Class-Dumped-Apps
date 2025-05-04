@interface AWEPOICityDetailTagsContextItem : NSObject
@property (nonatomic) AWEPOICityDetailTagItem selectedTagItem;
@property (nonatomic) q selectedTagItemIndex;
- (id)selectedTagItem;
- (long long)selectedTagItemIndex;
- (id)initWithSelectedTagItem:selectedIndex:;
- (void).cxx_destruct;
+ (id)itemWithSelectedTagItem:selectedIndex:;
@end
