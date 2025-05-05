@interface IESECTabKitTabBadgeConfigModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString identifier;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) Q number;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)number;
- (void)setText:;
- (id)icon;
- (id)identifier;
- (void)setType:;
- (void)setNumber:;
- (unsigned long long)type;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)text;
- (void)setIdentifier:;
+ (id)JSONKeyPathsByPropertyKey;
@end
