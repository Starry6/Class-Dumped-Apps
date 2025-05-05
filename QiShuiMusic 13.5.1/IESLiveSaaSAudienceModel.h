@interface IESLiveSaaSAudienceModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserModel user;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSNumber firePowerCount;
@property (nonatomic) NSString gapDescription;
@property (nonatomic) NSNumber delta;
@property (nonatomic) NSNumber isRich;
@property (nonatomic) BOOL rankInTotal;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) NSString scoreStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsAnchor:;
- (BOOL)isAnchor;
- (void)setIsHidden:;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)isRich;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
