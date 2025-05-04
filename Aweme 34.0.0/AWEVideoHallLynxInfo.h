@interface AWEVideoHallLynxInfo : MTLModel
@property (nonatomic) NSString rawData;
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxSchema;
- (void)setLynxSchema:;
- (void)setHeight:;
- (void)setRawData:;
- (void).cxx_destruct;
- (double)height;
- (id)rawData;
+ (id)JSONKeyPathsByPropertyKey;
@end
