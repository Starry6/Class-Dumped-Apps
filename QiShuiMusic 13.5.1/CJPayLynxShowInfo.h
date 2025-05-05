@interface CJPayLynxShowInfo : JSONModel
@property (nonatomic) NSString url;
@property (nonatomic) BOOL needJump;
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary exts;
- (BOOL)needJump;
- (void)setNeedJump:;
- (id)url;
- (void)setType:;
- (void)setUrl:;
- (id)type;
- (void).cxx_destruct;
- (id)exts;
- (void)setExts:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
