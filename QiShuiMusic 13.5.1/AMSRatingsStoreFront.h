@interface AMSRatingsStoreFront : NSObject
@property (nonatomic) NSString defaultLanguage;
@property (nonatomic) Q mediaType;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray ratingSystems;
@property (nonatomic) NSString storeFront;
@property (nonatomic) NSString storeFrontID;
@property (nonatomic) NSArray supportedLanguages;
- (unsigned long long)mediaType;
- (id)supportedLanguages;
- (id)defaultLanguage;
- (void).cxx_destruct;
- (id)storeFront;
- (id)description;
- (id)name;
- (id)initWithDictionary:mediaType:andStoreFront:;
- (id)initWithDictionary:mediaType:;
- (id)ratingSystems;
- (id)storeFrontID;
+ (id)storeFrontWithDictionary:mediaType:andStoreFront:;
+ (id)storeFrontWithDictionary:mediaType:;
@end
