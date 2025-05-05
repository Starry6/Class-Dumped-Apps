@interface AWEShareWebShareItem : MTLModel
@property (nonatomic) NSString shareType;
@property (nonatomic) NSString shareMode;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeID;
- (void)setAwemeID:;
- (void).cxx_destruct;
- (id)shareMode;
- (void)setShareMode:;
- (void)setShareType:;
- (id)shareType;
+ (id)shareModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
