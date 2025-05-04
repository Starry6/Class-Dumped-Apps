@interface AWEUserRiskNotice : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString text;
@property (nonatomic) NSString remindType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remindType;
- (void)setRemindType:;
- (void)setUrl:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
@end
