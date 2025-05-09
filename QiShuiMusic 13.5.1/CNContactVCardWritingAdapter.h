@interface CNContactVCardWritingAdapter : NSObject
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString suffix;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString maidenName;
@property (nonatomic) NSString phoneticFirstName;
@property (nonatomic) NSString phoneticMiddleName;
@property (nonatomic) NSString phoneticLastName;
@property (nonatomic) NSString pronunciationFirstName;
@property (nonatomic) NSString pronunciationLastName;
@property (nonatomic) NSString organization;
@property (nonatomic) NSString phoneticOrganization;
@property (nonatomic) NSString department;
@property (nonatomic) NSString jobTitle;
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL isCompany;
@property (nonatomic) NSInteger nameOrder;
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSArray phoneNumbers;
@property (nonatomic) NSArray postalAddresses;
@property (nonatomic) NSArray socialProfiles;
@property (nonatomic) NSArray instantMessagingAddresses;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSArray calendarURIs;
@property (nonatomic) NSDictionary activityAlerts;
@property (nonatomic) NSArray imageReferences;
@property (nonatomic) NSDictionary imageCropRects;
@property (nonatomic) NSDictionary largeImageCropRects;
@property (nonatomic) NSData largeImageData;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSString imageType;
@property (nonatomic) NSData imageHash;
@property (nonatomic) NSData memojiMetadata;
@property (nonatomic) NSDateComponents birthdayComponents;
@property (nonatomic) NSDateComponents alternateBirthdayComponents;
@property (nonatomic) NSArray otherDateComponents;
@property (nonatomic) NSArray relatedNames;
@property (nonatomic) NSString note;
@property (nonatomic) NSArray namesOfParentGroups;
@property (nonatomic) NSString cardDAVUID;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString phonemeData;
@property (nonatomic) NSInteger downtimeWhitelistAuthorization;
@property (nonatomic) NSString preferredLikenessSource;
@property (nonatomic) NSString preferredApplePersonaIdentifier;
@property (nonatomic) NSArray unknownProperties;
@property (nonatomic) NSString companyName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageType;
- (id)phoneNumbers;
- (BOOL)isMe;
- (id)emailAddresses;
- (id)organization;
- (id)urls;
- (id)uid;
- (id)imageData;
- (id)initWithContact:;
- (id)socialProfiles;
- (id)phonemeData;
- (id)firstName;
- (id)middleName;
- (id)lastName;
- (id)suffix;
- (id)nickname;
- (int)nameOrder;
- (id)title;
- (id)note;
- (id)phoneticLastName;
- (void).cxx_destruct;
- (id)jobTitle;
- (id)postalAddresses;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (id)phoneticFirstName;
- (id)preferredLikenessSource;
- (id)imageHash;
- (id)memojiMetadata;
- (id)preferredApplePersonaIdentifier;
- (id)calendarURIs;
- (id)cardDAVUID;
- (id)activityAlerts;
- (id)companyName;
- (BOOL)isCompany;
- (id)largeImageHashOfType:;
- (id)maidenName;
- (id)pronunciationFirstName;
- (id)pronunciationLastName;
- (id)phoneticOrganization;
- (id)department;
- (id)instantMessagingAddresses;
- (id)imageReferences;
- (id)imageCropRects;
- (id)largeImageCropRects;
- (id)largeImageData;
- (id)birthdayComponents;
- (id)alternateBirthdayComponents;
- (id)otherDateComponents;
- (id)namesOfParentGroups;
- (int)downtimeWhitelistAuthorization;
- (id)unknownProperties;
- (id)vCardPropertyItemsForProperty:;
- (id)vCardPropertyItemsForProperty:valueTransform:;
+ (id)adapterWithContact:;
+ (id)descriptorForAllSupportedKeys;
@end
