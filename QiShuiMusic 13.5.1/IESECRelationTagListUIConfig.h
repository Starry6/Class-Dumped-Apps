@interface IESECRelationTagListUIConfig : MTLModel
@property (nonatomic) double height;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) IESECURLModel backgroundImage;
@property (nonatomic) BOOL hasBorder;
@property (nonatomic) NSString borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) NSArray radiusList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)radiusList;
- (void)setRadiusList:;
- (void)setBorderColor:;
- (id)borderColor;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (double)borderWidth;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (double)height;
- (void)setBorderWidth:;
- (void)setHeight:;
- (void).cxx_destruct;
- (BOOL)hasBorder;
- (void)setHasBorder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
