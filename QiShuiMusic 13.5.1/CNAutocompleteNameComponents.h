@interface CNAutocompleteNameComponents : NSObject
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString nameSuffix;
- (id)firstName;
- (id)lastName;
- (unsigned long long)hash;
- (id)nickname;
- (void).cxx_destruct;
- (id)nameSuffix;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)contactKeys;
+ (id)nameComponentsWithFirstName:lastName:nickname:nameSuffix:;
@end
