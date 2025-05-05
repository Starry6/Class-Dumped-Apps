@interface IESECGoodsFeedActionModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableAttributedString attributeText;
@property (nonatomic) BOOL interactionEnabled;
- (id)attributeText;
- (void)setAttributeText:;
- (id)init;
- (void)setType:;
- (void)setTitle:;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (void)setInteractionEnabled:;
- (BOOL)interactionEnabled;
@end
