@interface IESECGoodsFeedCardOperationView : UIView
@property (nonatomic) <IESECGoodsFeedCardOperationViewDelegate> delegate;
- (void)updateItemButtonState:withType:;
- (id)cardItemForType:;
- (id)cardItemMap;
- (id)contentViewBuilder;
- (void)handleOperationItemGesture:;
- (id)initWithConfiguration:parameters:;
- (id)itemWithType:;
- (void)operationItemDidSelect:;
- (void)updateItemTitle:withType:;
- (void)updateItemTitleWithMap:;
- (void)updateWithParameters:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)buttonWithType:;
- (void)setupSubviews;
@end
