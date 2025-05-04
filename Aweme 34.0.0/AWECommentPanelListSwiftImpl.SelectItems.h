@interface AWECommentPanelListSwiftImpl.SelectItems : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) BOOL selectState;
@property (nonatomic) NSString group;
- (BOOL)selectState;
- (void)setSelectState:;
- (id)value;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setGroup:;
- (id)group;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
