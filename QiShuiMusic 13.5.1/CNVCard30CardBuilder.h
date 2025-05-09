@interface CNVCard30CardBuilder : NSObject
@property (nonatomic) <CNVCardPerson> person;
@property (nonatomic) NSMutableArray lines;
@property (nonatomic) q groupCount;
@property (nonatomic) Q countOfLinesBeforePhoto;
@property (nonatomic) @? retrofitPhoto;
@property (nonatomic) BOOL photoHandled;
@property (nonatomic) NSMutableArray unknownProperties;
@property (nonatomic) <CNVCardLineFactory> lineFactory;
- (void)setGroupCount:;
- (long long)groupCount;
- (void).cxx_destruct;
- (id)person;
- (id)lines;
- (id)unknownProperties;
- (id)initWithPerson:;
- (void)buildWithSerializer:;
- (void)removeUnknownPropertiesWithTag:;
- (void)addLineWithName:value:;
- (void)addBeginningOfCard;
- (void)addEndOfCard;
- (void)addNameLines;
- (void)addNameComponents;
- (void)addFullName;
- (void)addOrganization;
- (void)addEmailAddresses;
- (void)addPhoneNumbers;
- (void)addPostalAddresses;
- (void)addSocialProfiles;
- (void)addActivityAlerts;
- (void)addNote;
- (void)addURLs;
- (void)addCalendarURIs;
- (void)addBirthday;
- (void)addAlternateBirthday;
- (void)addOtherDates;
- (void)addRelatedNames;
- (void)addCompanyMarker;
- (void)addNameOrderMarker;
- (void)addCategories;
- (void)addUnknownProperties;
- (void)addCardDAVUID;
- (void)addUID;
- (void)addPhonemeData;
- (void)addPreferredLikenessSource;
- (void)addPreferredApplePersonaIdentifier;
- (void)addDowntimeWhitelist;
- (void)addImageType;
- (void)addImageHash;
- (void)addInstantMessagingInfo;
- (void)addInstantMessagingHandles:;
- (void)addLegacyInstantMessagingHandles:forService:vCardProperty:;
- (void)addPhotoWithOptions:;
- (BOOL)addPhotoReferences;
- (void)preparePhotoLineWithOptions:;
- (void)_addAttributesForCropRects:imageHash:toLine:;
- (void)addPropertyLinesForValues:generator:;
- (unsigned long long)countOfLinesBeforePhoto;
- (void)setCountOfLinesBeforePhoto:;
- (id)retrofitPhoto;
- (BOOL)photoHandled;
- (void)setPhotoHandled:;
- (id)lineFactory;
+ (id)builderWithPerson:;
+ (unsigned long long)estimatedBytesAvailableForPhotoWithOptions:serializer:;
@end
