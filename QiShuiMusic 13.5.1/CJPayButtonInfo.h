@interface CJPayButtonInfo : JSONModel
@property (nonatomic) NSString action;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString type;
- (id)desc;
- (void)setDesc:;
- (void)setType:;
- (id)action;
- (void)setAction:;
- (id)type;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
