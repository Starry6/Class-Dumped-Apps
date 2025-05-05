@interface CNContactImageSaveRequest : NSObject
@property (nonatomic) NSArray images;
@property (nonatomic) q operationType;
@property (nonatomic) NSString attributeName;
@property (nonatomic) NSPersistentStoreRequest persistentStoreRequest;
@property (nonatomic) NSArray contactIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)operationType;
- (id)contactIdentifiers;
- (id)images;
- (void).cxx_destruct;
- (void)setContactIdentifiers:;
- (id)persistentStoreRequest;
- (id)initWithContactImages:contactIdentifiers:attributeName:operationType:;
- (id)deleteStoreRequest;
- (id)createStoreRequest;
- (id)attributeName;
+ (id)saveRequestToCreateImage:forContactIdentifier:;
+ (id)saveRequestToDeleteImageForIdentifier:;
+ (id)saveRequestToDeleteImagesForContactIdentifiers:;
+ (id)saveRequestToCreateImages:forContactIdentifier:;
@end
