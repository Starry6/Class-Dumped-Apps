@interface AWEECOMIMRateServiceUIConfigModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isGift;
@property (nonatomic) BOOL isStack;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) NSArray iconList;
- (id)iconList;
- (void)setIconList:;
- (id)initWithUIConfigDict:;
- (void)setIsGift:;
- (void)setIsStack:;
- (BOOL)isGift;
- (double)iconWidth;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (double)iconHeight;
- (BOOL)isStack;
- (void)setIconHeight:;
- (void)setIconWidth:;
@end
