@interface IESECWinAuthorInfo : MTLModel
@property (nonatomic) NSString windowName;
@property (nonatomic) NSString name;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString followStatus;
@property (nonatomic) IESECURLModel avatar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)followStatus;
- (void)setFollowStatus:;
- (void)setWindowName:;
- (id)windowName;
- (id)schema;
- (void)setName:;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)name;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
