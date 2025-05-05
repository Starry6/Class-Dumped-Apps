@interface CNMeCardSharingEnabledDataSource : NSObject
@property (nonatomic) UISwitch enabledSwitch;
@property (nonatomic) NSArray items;
@property (nonatomic) <CNMeCardSharingEnabledDelegate> delegate;
@property (nonatomic) BOOL sharingEnabled;
@property (nonatomic) Q selectedIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)numberOfItems;
- (id)items;
- (void)setDelegate:;
- (void)setItems:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)sharingEnabled;
- (void)didSelectItemAtIndex:;
- (void)buildItems;
- (BOOL)supportsSelection;
- (id)sectionHeaderLabel;
- (id)sectionFooterLabel;
- (id)itemForIndex:;
- (void)didToggleEnabledSwitch:;
- (id)initWithSharingEnabled:;
- (void)setSharingEnabled:;
- (id)enabledSwitch;
- (void)setEnabledSwitch:;
@end
