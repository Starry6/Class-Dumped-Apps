@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource
@property (nonatomic) BOOL tracksChanges;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)categoriesForContactActionsView:;
- (id)contactActionsView:imageForActionCategory:;
@end
