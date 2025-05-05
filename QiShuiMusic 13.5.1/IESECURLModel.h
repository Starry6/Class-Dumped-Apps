@interface IESECURLModel : MTLModel
@property (nonatomic) NSString URI;
@property (nonatomic) NSArray URLList;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)URLList;
- (void)setURLList:;
- (id)URI;
- (void)setWidth:;
- (id)height;
- (id)width;
- (void)setURI:;
- (void)setHeight:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
