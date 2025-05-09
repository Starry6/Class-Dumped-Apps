@interface AMSBagFrozenDataSource : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDictionary defaultValues;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL loaded;
@property (nonatomic) AMSProcessInfo processInfo;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
@property (nonatomic) NSString descriptionExtended;
@property (nonatomic) @? dataSourceChangedHandler;
@property (nonatomic) @? dataSourceDataInvalidatedHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (id)processInfo;
- (void)setDefaultValue:forKey:;
- (id)data;
- (id)defaultValues;
- (id)initWithCoder:;
- (id)profile;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (id)_initWithProfile:profileVersion:data:expirationDate:account:processInfo:defaultValues:;
- (void).cxx_destruct;
- (id)defaultValueForKey:;
- (BOOL)isLoaded;
- (void)loadWithCompletion:;
- (id)description;
- (id)valueForURLVariable:account:;
- (id)profileVersion;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
