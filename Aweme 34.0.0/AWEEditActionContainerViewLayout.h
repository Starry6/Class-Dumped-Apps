@interface AWEEditActionContainerViewLayout : NSObject
@property (nonatomic) double itemSpacing;
@property (nonatomic) {CGSize=dd} itemSize;
@property (nonatomic) {UIEdgeInsets=dddd} containerInset;
@property (nonatomic) {UIEdgeInsets=dddd} contentInset;
@property (nonatomic) Q direction;
@property (nonatomic) q foldExihibitCount;
- (long long)foldExihibitCount;
- (void)setFoldExihibitCount:;
- (void)setContentInset:;
- (double)itemSpacing;
- (unsigned long long)direction;
- (void)setItemSpacing:;
- (void)setDirection:;
- (id)contentInset;
- (id)copyWithZone:;
- (id)itemSize;
- (void)setItemSize:;
- (id)containerInset;
- (void)setContainerInset:;
@end
