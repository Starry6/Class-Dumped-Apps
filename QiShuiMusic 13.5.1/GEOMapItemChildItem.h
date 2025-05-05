@interface GEOMapItemChildItem : NSObject
@property (nonatomic) q childItemType;
@property (nonatomic) GEOMapItemChildPlace childItemPlace;
@property (nonatomic) GEOMapItemChildAction childItemAction;
@property (nonatomic) GEOPublisherResult publisherResult;
- (void).cxx_destruct;
- (id)initWithPublisherResult:;
- (id)publisherResult;
- (id)initWithChildPlace:;
- (id)initWithChildItem:;
- (long long)childItemType;
- (void)setChildItemType:;
- (id)childItemPlace;
- (void)setChildItemPlace:;
- (id)childItemAction;
- (void)setChildItemAction:;
@end
