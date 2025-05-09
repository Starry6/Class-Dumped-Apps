@interface AWESearchAISummaryEntryConfigModel : AWEBaseApiModel
@property (nonatomic) NSString darkIcon;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString schema;
@property (nonatomic) q styleType;
@property (nonatomic) NSString text;
@property (nonatomic) NSArray gradient;
@property (nonatomic) NSArray darkGradient;
@property (nonatomic) double iconAlpha;
@property (nonatomic) q stayTime;
@property (nonatomic) q expandTime;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString searchKeyword;
- (id)searchId;
- (void)setSearchId:;
- (id)searchKeyword;
- (id)darkIcon;
- (void)setStyleType:;
- (void)setSearchKeyword:;
- (void)setDarkIcon:;
- (void)setStayTime:;
- (long long)stayTime;
- (id)darkGradient;
- (void)setDarkGradient:;
- (long long)expandTime;
- (void)setExpandTime:;
- (id)schema;
- (void)setGroupId:;
- (id)groupId;
- (void)setGradient:;
- (id)gradient;
- (void)setSchema:;
- (double)iconAlpha;
- (id)icon;
- (void)setText:;
- (id)text;
- (long long)styleType;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setIconAlpha:;
+ (id)JSONKeyPathsByPropertyKey;
@end
