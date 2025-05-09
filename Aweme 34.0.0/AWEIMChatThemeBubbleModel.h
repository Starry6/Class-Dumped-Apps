@interface AWEIMChatThemeBubbleModel : MTLModel
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString gradientColorStart;
@property (nonatomic) NSString gradientColorEnd;
@property (nonatomic) NSString ltIconURL;
@property (nonatomic) NSString rtIconURL;
@property (nonatomic) NSString lbIconURL;
@property (nonatomic) NSString rbIconURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strictIdentifier;
- (id)gradientColorStart;
- (id)gradientColorEnd;
- (id)ltIconURL;
- (id)lbIconURL;
- (id)rtIconURL;
- (id)rbIconURL;
- (void)setGradientColorStart:;
- (void)setGradientColorEnd:;
- (void)setLtIconURL:;
- (void)setRtIconURL:;
- (void)setLbIconURL:;
- (void)setRbIconURL:;
- (void)setIdentifier:;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (id)JSONKeyPathsByPropertyKey;
@end
