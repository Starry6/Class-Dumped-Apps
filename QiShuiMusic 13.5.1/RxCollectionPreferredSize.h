@interface RxCollectionPreferredSize : NSObject
@property (nonatomic) {CGSize=dd} fittingSize;
@property (nonatomic) {CGSize=dd} originalSize;
@property (nonatomic) {CGSize=dd} preferredSize;
@property (nonatomic) RxCollectionLayoutSize layoutSize;
@property (nonatomic) BOOL dirty;
@property (nonatomic) @ additionalData;
- (id)initWithOriginalSize:fittingSize:layoutSize:additionalData:;
- (id)preferredSizeForOriginalSize:layoutSize:;
- (void)setDirty:;
- (id)layoutSize;
- (BOOL)isDirty;
- (id)fittingSize;
- (id)originalSize;
- (void).cxx_destruct;
- (id)description;
- (id)preferredSize;
- (id)additionalData;
- (void)setAdditionalData:;
+ (id)preferredSizeForOriginalSize:fittingSize:layoutSize:;
@end
