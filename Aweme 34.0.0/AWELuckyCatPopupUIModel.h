@interface AWELuckyCatPopupUIModel : MTLModel
@property (nonatomic) AWELuckyCatPopupContainerModel container;
@property (nonatomic) AWELuckyCatPopupHeadImageModel headImage;
@property (nonatomic) AWELuckyCatPopupCloseButtonModel closeButton;
@property (nonatomic) NSArray widgets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headImage;
- (void)setHeadImage:;
- (void)setContainer:;
- (id)container;
- (id)widgets;
- (void).cxx_destruct;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setWidgets:;
+ (id)containerJSONTransformer;
+ (id)headImageJSONTransformer;
+ (id)closeButtonJSONTransformer;
+ (id)widgetsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
