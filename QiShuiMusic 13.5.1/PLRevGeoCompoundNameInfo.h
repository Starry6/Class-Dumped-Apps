@interface PLRevGeoCompoundNameInfo : NSObject
@property (nonatomic) NSString namePrefix;
@property (nonatomic) NSString nameSuffix;
@property (nonatomic) NSArray sortedNames;
@property (nonatomic) BOOL isContinuation;
@property (nonatomic) BOOL suffixWhenPrefixOnly;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)nameSuffix;
- (id)description;
- (id)namePrefix;
- (BOOL)isEqual:;
- (id)initWithNamePrefix:nameSuffix:sortedNames:isContinuation:suffixWhenPrefixOnly:;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;
- (id)sortedNames;
- (BOOL)isContinuation;
- (BOOL)suffixWhenPrefixOnly;
+ (BOOL)supportsSecureCoding;
+ (id)_localizedNameForName:;
@end
