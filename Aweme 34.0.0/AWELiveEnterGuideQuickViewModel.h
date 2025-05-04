@interface AWELiveEnterGuideQuickViewModel : NSObject
@property (nonatomic) NSString content;
@property (nonatomic) NSAttributedString attributedString;
@property (nonatomic) double caculateWidth;
- (double)caculateWidth;
- (void)setCaculateWidth:;
- (void)precaculateCellWidthForContent:;
- (id)content;
- (id)color;
- (void)setAttributedString:;
- (void)setContent:;
- (void).cxx_destruct;
- (id)attributedString;
- (id)initWithContent:;
@end
