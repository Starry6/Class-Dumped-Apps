@interface BYLocaleCountry : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString code;
- (void)setName:;
- (id)code;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setCode:;
- (BOOL)isEqual:;
+ (id)comparatorForLocale:;
@end
