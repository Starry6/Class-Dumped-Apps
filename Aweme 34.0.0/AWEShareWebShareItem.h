@interface AWEShareWebShareItem : MTLModel
@property (nonatomic) NSString shareType;
@property (nonatomic) NSString shareMode;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setAwemeID:;
- (id)awemeID;
- (id)extra;
- (void).cxx_destruct;
- (void)setShareMode:;
- (id)shareMode;
- (void)setShareType:;
- (id)shareType;
+ (id)shareModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
