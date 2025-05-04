@interface AWEIMEclipseOverlapedInsideImgItem : NSObject
@property (nonatomic) Q itemType;
@property (nonatomic) UIImage img;
@property (nonatomic) NSArray urlList;
@property (nonatomic) {CGSize=dd} imgSize;
@property (nonatomic) UIColor backGroundColor;
- (id)imgSize;
- (void)setImgSize:;
- (id)backGroundColor;
- (void)setBackGroundColor:;
- (void)setImg:;
- (id)initWithItemType:img:urlList:imgSize:backGroundColor:;
- (unsigned long long)itemType;
- (void)setItemType:;
- (void).cxx_destruct;
- (id)img;
- (id)urlList;
- (void)setUrlList:;
@end
