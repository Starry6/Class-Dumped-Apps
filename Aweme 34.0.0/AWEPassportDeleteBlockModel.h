@interface AWEPassportDeleteBlockModel : MTLModel
@property (nonatomic) double applyTime;
@property (nonatomic) double cancelTime;
@property (nonatomic) NSString avatar;
@property (nonatomic) NSString token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)cancelTime;
- (void)setCancelTime:;
- (double)applyTime;
- (void)setApplyTime:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
