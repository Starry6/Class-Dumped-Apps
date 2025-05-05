@interface FigAlternateObjCVideoAttributes : FigKVCInspectable
@property (nonatomic) NSString videoRange;
@property (nonatomic) NSArray codecTypes;
@property (nonatomic) {CGSize=dd} presentationSize;
@property (nonatomic) double nominalFrameRate;
- (void)dealloc;
- (id)presentationSize;
- (double)nominalFrameRate;
- (id)initWithFigAlternate:;
- (id)videoRange;
- (id)codecTypes;
@end
