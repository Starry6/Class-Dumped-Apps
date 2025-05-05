@interface CJPayTouchLabel : UILabel
@property (nonatomic) NSMutableArray attributeStrings;
@property (nonatomic) NSMutableDictionary effectDic;
@property (nonatomic) @? tapBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)p_getLineOrign:;
- (id)attributeStrings;
- (void)cj_addAttributeTapActionWithStrings:tapClicked:;
- (id)effectDic;
- (id)p_getLineBounds:point:;
- (void)p_getRangesWithStrings:;
- (id)p_getStringWithRange:;
- (BOOL)p_getTapFrameWithTouchPoint:result:;
- (void)p_removeAttributeTapActions;
- (id)p_textSizeWithAttributedString:width:numberOfLines:;
- (id)p_transformForCoreText;
- (void)setAttributeStrings:;
- (void)setEffectDic:;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)touchesBegan:withEvent:;
- (void).cxx_destruct;
@end
