@interface CNContactCardFieldPickerDataSource : NSObject
@property (nonatomic) NSArray contacts;
@property (nonatomic) NSArray sections;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sections;
- (void)setContacts:;
- (id)initWithContact:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)contacts;
- (void).cxx_destruct;
- (id)tableView:titleForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (long long)totalItemCount;
- (id)initWithContacts:;
- (id)_loadSections;
- (id)_loadSectionsForContacts;
- (id)itemsForKey:forContacts:;
- (id)itemsForKey:forContact:;
- (id)keyForIndexPath:;
- (BOOL)hasPhotoForContact:;
- (id)firstContactContainingPhoto;
+ (id)shareableNamePropertiesForContact:;
+ (id)shareableCardProperties;
@end
