@interface RxCollectionLayoutContainer : NSObject
@property (nonatomic) {RxDirectionalEdgeInsets=dddd} contentInsets;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) {RxDirectionalEdgeInsets=dddd} effectiveContentInsets;
@property (nonatomic) {CGSize=dd} effectiveContentSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)effectiveContentSize;
- (void)setContentInsets:;
- (id)initWithContentSize:contentInsets:;
- (id)contentInsets;
- (id)contentSize;
- (id)description;
- (id)effectiveContentInsets;
- (void)setContentSize:;
@end
