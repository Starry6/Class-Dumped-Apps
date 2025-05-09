@interface PFMetadataBuilder : NSObject
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSTimeZone creationTimeZone;
@property (nonatomic) NSString title;
@property (nonatomic) NSString caption;
@property (nonatomic) NSArray keywords;
@property (nonatomic) NSString accessibilityDescription;
@property (nonatomic) NSArray peopleNames;
@property (nonatomic) CLLocation location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)keywords;
- (void)setKeywords:;
- (id)init;
- (void)setCreationDate:;
- (id)accessibilityDescription;
- (id)caption;
- (void)setTitle:;
- (id)location;
- (id)title;
- (void)setCaption:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)creationDate;
- (id)peopleNames;
- (void)setPeopleNames:;
- (void)setAccessibilityDescription:;
- (void)setCreationDate:timeZone:;
- (id)creationTimeZone;
- (id)combinedKeywordsAndPeople;
- (void)setCreationTimeZone:;
@end
