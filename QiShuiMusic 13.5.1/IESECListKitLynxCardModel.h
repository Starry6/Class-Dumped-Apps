@interface IESECListKitLynxCardModel : MTLModel
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) NSDictionary lynxData;
@property (nonatomic) NSDictionary extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxData;
- (id)lynxSchema;
- (void)setLynxData:;
- (void)setLynxSchema:;
- (void).cxx_destruct;
- (void)setExtraData:;
- (id)extraData;
+ (id)extraDataJSONTransformer;
+ (id)lynxDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
