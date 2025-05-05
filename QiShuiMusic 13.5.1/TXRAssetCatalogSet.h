@interface TXRAssetCatalogSet : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q interpretation;
@property (nonatomic) Q origin;
@property (nonatomic) BOOL cubemap;
@property (nonatomic) NSArray configs;
- (id)init;
- (void)setOrigin:;
- (void)setName:;
- (id)initWithName:;
- (unsigned long long)origin;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)interpretation;
- (BOOL)cubemap;
- (id)exportAtLocation:error:;
- (BOOL)addConfig:error:;
- (void)setInterpretation:;
- (id)configs;
@end
