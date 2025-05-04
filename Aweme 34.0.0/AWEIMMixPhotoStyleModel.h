@interface AWEIMMixPhotoStyleModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString describe;
@property (nonatomic) NSString negativeText;
@property (nonatomic) NSString positiveText;
@property (nonatomic) NSArray list;
@property (nonatomic) BOOL showAiModelEntrance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDescribe:;
- (id)negativeText;
- (void)setNegativeText:;
- (id)positiveText;
- (void)setPositiveText:;
- (BOOL)showAiModelEntrance;
- (void)setShowAiModelEntrance:;
- (void)setList:;
- (id)list;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)describe;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
