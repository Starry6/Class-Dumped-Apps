@interface AWEUGFCoinStayPopupInfo : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) AWEUGFCoinStayPopupButton leftBtn;
@property (nonatomic) AWEUGFCoinStayPopupButton rightBtn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)leftBtn;
- (id)rightBtn;
- (void)setLeftBtn:;
- (void)setRightBtn:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
