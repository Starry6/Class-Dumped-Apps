@interface AWEOpenAuthInfoAlertScope : MTLModel
@property (nonatomic) NSString scopeName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString negativeButton;
@property (nonatomic) NSString positiveButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setScopeName:;
- (id)negativeButton;
- (id)positiveButton;
- (void)setNegativeButton:;
- (void)setPositiveButton:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)scopeName;
+ (id)JSONKeyPathsByPropertyKey;
@end
