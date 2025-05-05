@interface CNAutocompleteAggdProbe : NSObject
@property (nonatomic) NSMutableDictionary setData;
@property (nonatomic) NSMutableDictionary addData;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString keyPrefix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)bundleID;
- (void)sendData;
- (id)initWithKeyPrefix:;
- (id)initWithKeyPrefix:bundleIdentifier:;
- (id)fullKey:;
- (void)recordSetValue:forKey:;
- (void)recordAddValue:forKey:;
- (id)keyPrefix;
- (id)setData;
- (void)setSetData:;
- (id)addData;
- (void)setAddData:;
+ (id)preparedBundleIdentifier:;
@end
