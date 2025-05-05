@interface UIActivityItemProvider : NSOperation
@property (nonatomic) @ placeholderItem;
@property (nonatomic) @ providedItem;
@property (nonatomic) NSString activityType;
@property (nonatomic) @ item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityType;
- (id)item;
- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)activityViewControllerPlaceholderItem:;
- (id)activityViewController:itemForActivityType:;
- (id)initWithPlaceholderItem:;
- (void)_setActivityType:;
- (id)placeholderItem;
- (BOOL)_shouldExecuteItemOperationForActivity:;
- (void)setPlaceholderItem:;
- (id)providedItem;
- (void)setProvidedItem:;
@end
