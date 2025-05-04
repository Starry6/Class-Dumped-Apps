@interface AWEUserDialogModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) NSString dialogReason;
@property (nonatomic) AWEUserDialogContentModel dialogContent;
@property (nonatomic) NSArray dialogButtons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dialogContent;
- (void)setDialogContent:;
- (id)dialogButtons;
- (id)dialogReason;
- (void)setDialogReason:;
- (void)setDialogButtons:;
- (long long)style;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
+ (id)dialogModelWith:;
+ (id)dialogContentJSONTransformer;
+ (id)dialogButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
