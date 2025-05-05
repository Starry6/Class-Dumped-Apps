@interface CUIRenditionSliceInformation : NSObject
@property (nonatomic) q renditionType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} destinationRect;
@property (nonatomic) {?=dddd} edgeInsets;
- (long long)renditionType;
- (id)destinationRect;
- (id)edgeInsets;
- (double)positionOfSliceBoundary:;
- (id)initWithSliceInformation:destinationRect:;
- (id)description;
- (id)initWithRenditionType:destinationRect:topLeftInset:bottomRightInset:;
- (id)_bottomRightCapSize;
- (id)_topLeftCapSize;
- (id)copyWithZone:;
@end
