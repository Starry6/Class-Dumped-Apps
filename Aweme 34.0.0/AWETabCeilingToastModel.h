@interface AWETabCeilingToastModel : MTLModel
@property (nonatomic) q toastType;
@property (nonatomic) q position;
@property (nonatomic) NSString toastText;
@property (nonatomic) NSString jumpUrlTitle;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) q limitID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toastText;
- (void)setToastText:;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (long long)toastType;
- (void)setToastType:;
- (id)jumpUrlTitle;
- (void)setJumpUrlTitle:;
- (long long)limitID;
- (void)setLimitID:;
- (long long)position;
- (void).cxx_destruct;
- (void)setPosition:;
+ (id)JSONKeyPathsByPropertyKey;
@end
