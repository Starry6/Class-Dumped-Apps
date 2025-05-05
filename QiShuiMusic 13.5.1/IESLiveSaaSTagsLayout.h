@interface IESLiveSaaSTagsLayout : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) UILabel caculateLable;
@property (nonatomic) IESLiveSaaSTagsView view;
@property (nonatomic) NSArray items;
- (id)caculateLable;
- (id)itemSizeFor:;
- (void)refreshLayoutWithContainerWidth:;
- (void)setCaculateLable:;
- (id)items;
- (id)view;
- (void)setItems:;
- (void).cxx_destruct;
- (id)contentSize;
- (void)setView:;
- (void)setSize:;
- (id)size;
@end
