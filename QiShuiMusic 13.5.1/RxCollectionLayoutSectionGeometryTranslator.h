@interface RxCollectionLayoutSectionGeometryTranslator : NSObject
@property (nonatomic) {CGSize=dd} auxillaryHostContentSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentFrame;
@property (nonatomic) {CGPoint=dd} contentOffset;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) {CGSize=dd} effectiveContentSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} effectiveFrame;
- (void)__computeFrames;
- (id)contentRectForSectionRect:;
- (id)effectiveFrame;
- (id)initWithContentSize:layoutAxis:layoutRTL:sectionInsets:supplementaryInsets:;
- (id)contentOffset;
- (id)effectiveContentSize;
- (id)contentFrame;
- (id)contentSize;
- (id)description;
- (id)auxillaryHostContentSize;
@end
