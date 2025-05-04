@interface AWEPOILynxModel : MTLModel
@property (nonatomic) q identifier;
@property (nonatomic) NSString originalLynxUrl;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSString rawData;
@property (nonatomic) q height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxUrl;
- (void)setLynxUrl:;
- (id)originalLynxUrl;
- (void)setOriginalLynxUrl:;
- (void)setHeight:;
- (void)setIdentifier:;
- (void)setRawData:;
- (long long)identifier;
- (void).cxx_destruct;
- (long long)height;
- (id)rawData;
+ (id)JSONKeyPathsByPropertyKey;
@end
