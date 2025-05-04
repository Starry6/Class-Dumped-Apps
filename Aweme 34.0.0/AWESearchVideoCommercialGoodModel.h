@interface AWESearchVideoCommercialGoodModel : AWEBaseApiModel
@property (nonatomic) NSNumber height;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString rawData;
@property (nonatomic) NSDictionary logDict;
- (id)logDict;
- (void)setLogDict:;
- (id)bindLynxViewWrapper;
- (id)schema;
- (void)setSchema:;
- (void)setHeight:;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)height;
- (id)rawData;
+ (id)JSONKeyPathsByPropertyKey;
@end
