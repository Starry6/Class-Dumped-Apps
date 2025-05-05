@interface CSJDynamicImageInfoModel : NSObject
@property (nonatomic) NSDictionary originDictionary;
@property (nonatomic) NSString url;
@property (nonatomic) q height;
@property (nonatomic) q width;
- (id)originDictionary;
- (void)setOriginDictionary:;
- (id)url;
- (id)init;
- (id)initWithDictionary:;
- (void)setWidth:;
- (void)setUrl:;
- (long long)height;
- (long long)width;
- (BOOL)isValid;
- (void)setHeight:;
- (void).cxx_destruct;
+ (id)defaultDynamicImageInfoModel;
@end
