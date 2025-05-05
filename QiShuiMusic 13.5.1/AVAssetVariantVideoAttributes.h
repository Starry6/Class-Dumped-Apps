@interface AVAssetVariantVideoAttributes : NSObject
@property (nonatomic) NSString videoRange;
@property (nonatomic) NSArray codecTypes;
@property (nonatomic) {CGSize=dd} presentationSize;
@property (nonatomic) double nominalFrameRate;
- (void)dealloc;
- (id)presentationSize;
- (double)nominalFrameRate;
- (id)videoRange;
- (id)codecTypes;
- (id)initWithFigAlternateObjC:;
@end
