@interface AWENearbyC2HeaderToolEntranceResponse : MTLModel
@property (nonatomic) AWENearbyC2HeaderToolDataModel toolData;
@property (nonatomic) BOOL isFromSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toolData;
- (void)setIsFromSettings:;
- (void)setToolData:;
- (BOOL)isFromSettings;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)toolDataJSONTransformer;
@end
