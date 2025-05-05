@interface CNMeCardSharingSettingsNameDataSource : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString formattedName;
@property (nonatomic) Q selectedIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)numberOfItems;
- (id)contact;
- (id)items;
- (void)setContact:;
- (void)setItems:;
- (void).cxx_destruct;
- (id)formattedName;
- (void)didSelectItemAtIndex:;
- (BOOL)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;
- (id)itemForIndex:;
- (void)setFormattedName:;
@end
