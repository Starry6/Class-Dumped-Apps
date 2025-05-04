@interface AWEIMEclipseOverlapedViewConfig : NSObject
@property (nonatomic) NSArray imgItemList;
@property (nonatomic) @? lastItemtappedBlock;
@property (nonatomic) double eachEclipseRadius;
@property (nonatomic) double overlapDistance;
@property (nonatomic) double borderWidth;
@property (nonatomic) UIColor borderColor;
- (void)setImgItemList:;
- (void)setLastItemtappedBlock:;
- (void)setEachEclipseRadius:;
- (void)setOverlapDistance:;
- (id)initWithImgItemList:lastItemtappedBlock:eachEclipseRadius:overlapDistance:borderWidth:borderColor:;
- (id)imgItemList;
- (id)lastItemtappedBlock;
- (double)eachEclipseRadius;
- (double)overlapDistance;
- (void)setBorderColor:;
- (void)setBorderWidth:;
- (double)borderWidth;
- (id)borderColor;
- (void).cxx_destruct;
@end
