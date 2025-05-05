@interface CNContactImageFetchRequest : NSObject
@property (nonatomic) NSPersistentStoreRequest persistentStoreRequest;
@property (nonatomic) NSArray contactIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contactIdentifiers;
- (void).cxx_destruct;
- (void)setContactIdentifiers:;
- (id)persistentStoreRequest;
- (id)initWithContactIdentifiers:;
+ (id)recentImagesRequestForContactIdenfitiers:;
+ (id)predicateForImagesMatchingContactIdentifiers:;
@end
