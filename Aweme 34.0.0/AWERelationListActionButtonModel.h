@interface AWERelationListActionButtonModel : NSObject
@property (nonatomic) BOOL show;
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconName;
@property (nonatomic) BOOL readInFocusForAccessibility;
@property (nonatomic) Q style;
@property (nonatomic) @? actionButtonClickBlock;
- (id)actionButtonClickBlock;
- (BOOL)readInFocusForAccessibility;
- (void)setReadInFocusForAccessibility:;
- (void)setActionButtonClickBlock:;
- (BOOL)show;
- (id)iconName;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)title;
- (void)setIconName:;
- (void)setTitle:;
- (void)setStyle:;
- (void)setShow:;
@end
