@interface AWEIMMessageListNaviBarTitleUserRoleTagInfo : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIImage icon;
@property (nonatomic) Q type;
@property (nonatomic) Q style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithType:text:textColor:backgroundColor:;
- (id)initWithType:icon:;
- (unsigned long long)hash;
- (id)icon;
- (id)text;
- (unsigned long long)type;
- (unsigned long long)style;
- (id)backgroundColor;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)textColor;
@end
