@interface AWERelationListDescLabelModel : NSObject
@property (nonatomic) BOOL show;
@property (nonatomic) BOOL showBorder;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSString descText;
@property (nonatomic) NSAttributedString attributedDescText;
- (id)attributedDescText;
- (id)descText;
- (void)setDescText:;
- (void)setAttributedDescText:;
- (BOOL)show;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setShow:;
- (void)setShowBorder:;
- (BOOL)showBorder;
@end
