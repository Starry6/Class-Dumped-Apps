@interface IESECGoodsDetailLynxCardElement : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSString lynxID;
@property (nonatomic) BOOL eventThrough;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)eventThrough;
- (id)lynxID;
- (void)setEventThrough:;
- (void)setLynxID:;
- (id)schema;
- (id)data;
- (void)setWidth:;
- (void)setSchema:;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setData:;
+ (id)JSONKeyPathsByPropertyKey;
@end
