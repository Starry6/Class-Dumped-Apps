@interface IESECTextElement : MTLModel
@property (nonatomic) IESECTextStyle textStyle;
@property (nonatomic) NSString text;
@property (nonatomic) IESECLinkConfig link;
@property (nonatomic) NSArray highlights;
@property (nonatomic) NSString tag;
@property (nonatomic) q maxLines;
@property (nonatomic) Q textAlignment;
@property (nonatomic) NSNumber randomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)randomID;
- (void)setRandomID:;
- (id)link;
- (void)setMaxLines:;
- (id)tag;
- (id)textStyle;
- (void)setText:;
- (void)setLink:;
- (long long)maxLines;
- (void)setTextStyle:;
- (void)setTag:;
- (void).cxx_destruct;
- (unsigned long long)textAlignment;
- (void)setTextAlignment:;
- (id)highlights;
- (id)text;
- (void)setHighlights:;
+ (id)highlightsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
