@interface AWEECGiftModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString horizontalCardName;
@property (nonatomic) AWEAwemeModel awemeData;
@property (nonatomic) AWEURLModel backgroundImage;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeData:;
- (id)awemeData;
- (id)horizontalCardName;
- (void)setHorizontalCardName:;
- (id)backgroundImage;
- (id)schema;
- (void)setIsSelected:;
- (void)setBackgroundImage:;
- (void)setSchema:;
- (BOOL)isSelected;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
