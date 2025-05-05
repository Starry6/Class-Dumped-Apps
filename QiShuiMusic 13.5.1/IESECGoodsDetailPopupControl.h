@interface IESECGoodsDetailPopupControl : MTLModel
@property (nonatomic) NSString popupURL;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString popupKey;
@property (nonatomic) BOOL skipClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (id)popupKey;
- (id)popupURL;
- (void)setJumpURL:;
- (void)setPopupKey:;
- (void)setPopupURL:;
- (void)setSkipClose:;
- (BOOL)skipClose;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
