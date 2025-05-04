@interface AWEPOIDetailNGUGCSimpleTextEmptyComponentViewModel : DitoComponentViewModel
@property (nonatomic) BOOL hasRemoved;
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasRemoved:;
- (BOOL)hasRemoved;
- (id)componentReuseIdentifier;
- (id)componentSizeWithMaxWidth:;
- (id)initWithNode:;
@end
