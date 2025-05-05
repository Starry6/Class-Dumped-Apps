@interface SAMPReleaseInfo : AceObject
@property (nonatomic) SACalendar releaseDate;
@property (nonatomic) q releaseYear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)releaseDate;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setReleaseDate:;
- (long long)releaseYear;
- (void)setReleaseYear:;
+ (id)_af_releaseInfoWithReleaseDate:;
+ (id)releaseInfo;
+ (id)releaseInfoWithDictionary:context:;
@end
