@interface AWEMVSelectedBillboardEntranceModel : MTLModel
@property (nonatomic) NSString lightIconUrlString;
@property (nonatomic) NSString darkIconUrlString;
@property (nonatomic) NSString titleString;
@property (nonatomic) NSString schemaString;
@property (nonatomic) NSString lightTextColorString;
@property (nonatomic) NSString darkTextColorString;
@property (nonatomic) NSString lightBackgroundColorString;
@property (nonatomic) NSString darkBackgroundColorString;
@property (nonatomic) Q month;
@property (nonatomic) Q term;
@property (nonatomic) double timeStamp;
@property (nonatomic) Q billboardType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)billboardType;
- (void)setBillboardType:;
- (id)schemaString;
- (void)setSchemaString:;
- (id)initPlaceholderModelWithType:;
- (void)setLightTextColorString:;
- (void)setDarkTextColorString:;
- (void)setLightBackgroundColorString:;
- (void)setDarkBackgroundColorString:;
- (id)lightIconUrlString;
- (void)setLightIconUrlString:;
- (id)darkIconUrlString;
- (void)setDarkIconUrlString:;
- (id)lightTextColorString;
- (id)darkTextColorString;
- (id)lightBackgroundColorString;
- (id)darkBackgroundColorString;
- (unsigned long long)month;
- (void).cxx_destruct;
- (void)setMonth:;
- (double)timeStamp;
- (void)setTimeStamp:;
- (unsigned long long)term;
- (void)setTitleString:;
- (id)titleString;
- (void)setTerm:;
+ (id)JSONKeyPathsByPropertyKey;
@end
