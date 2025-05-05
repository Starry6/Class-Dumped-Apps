@interface IESLiveContainerServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addViewElement:;
- (void)addView:viewType:;
- (void)addView:viewType:insets:size:;
- (void)addView:viewType:size:;
- (id)containerForViewType:;
- (id)queryContainerByType:;
- (id)queryViewByType:;
- (void)removeViewElement:;
@end
