@interface AWEHPHambMessageItemDataModel : MTLModel
@property (nonatomic) NSString cmd;
@property (nonatomic) NSObject data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cmd;
- (void)setCmd:;
- (BOOL)isValidWithError:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)JSONKeyPathsByPropertyKey;
@end
