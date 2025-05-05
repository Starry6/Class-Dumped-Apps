@interface PSSpecifierUpdateContext : NSObject
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL updateModelOnly;
@property (nonatomic) NSDictionary userInfo;
- (void)setAnimated:;
- (BOOL)animated;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)updateModelOnly;
- (void)setUpdateModelOnly:;
+ (id)context;
+ (id)contextWithUserInfo:;
@end
