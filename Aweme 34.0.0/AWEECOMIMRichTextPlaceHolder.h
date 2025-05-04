@interface AWEECOMIMRichTextPlaceHolder : MTLModel
@property (nonatomic) NSString keyId;
@property (nonatomic) NSString text;
@property (nonatomic) NSString type;
@property (nonatomic) NSString URLType;
@property (nonatomic) NSString url;
@property (nonatomic) NSString color;
@property (nonatomic) BOOL bold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setURLType:;
- (id)URLType;
- (void)setUrl:;
- (void)setText:;
- (id)color;
- (id)text;
- (void)setColor:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)url;
- (id)keyId;
- (void)setKeyId:;
- (BOOL)bold;
- (void)setBold:;
+ (id)JSONKeyPathsByPropertyKey;
@end
