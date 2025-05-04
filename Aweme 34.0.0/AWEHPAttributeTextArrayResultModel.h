@interface AWEHPAttributeTextArrayResultModel : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSArray resultItems;
@property (nonatomic) NSAttributedString attributeText;
- (id)attributeText;
- (void)setAttributeText:;
- (void)setResultItems:;
- (void)setSuccess:;
- (void).cxx_destruct;
- (id)resultItems;
- (BOOL)success;
@end
