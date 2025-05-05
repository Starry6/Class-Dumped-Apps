@interface ICMusicLibraryAuthTokenStatus : NSObject
@property (nonatomic) ICMusicLibraryAuthToken token;
@property (nonatomic) NSError lastError;
@property (nonatomic) NSDate lastUpdatedDate;
@property (nonatomic) BOOL shouldExcludeFromBackgroundRefresh;
@property (nonatomic) BOOL frozen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)token;
- (void)setFrozen:;
- (id)initWithCoder:;
- (id)initWithBlock:;
- (id)lastUpdatedDate;
- (BOOL)isFrozen;
- (void)setToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLastError:;
- (id)lastError;
- (id)copyWithZone:;
- (void)setLastUpdatedDate:;
- (BOOL)shouldExcludeFromBackgroundRefresh;
- (void)setShouldExcludeFromBackgroundRefresh:;
+ (BOOL)supportsSecureCoding;
@end
