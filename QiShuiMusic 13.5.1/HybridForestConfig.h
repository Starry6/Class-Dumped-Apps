@interface HybridForestConfig : NSObject
@property (nonatomic) NSMutableDictionary prefixList;
@property (nonatomic) IESForestConfig forestConfig;
@property (nonatomic) NSMutableDictionary falconPrefixList;
@property (nonatomic) HybridResourceConfig resourceConfig;
- (id)falconPrefixList;
- (id)forestConfig;
- (id)prefixList;
- (id)resourceConfig;
- (void)setForestConfig:;
- (void)setPrefixList:;
- (void)setResourceConfig:;
- (void)updateForestConfig;
- (id)init;
- (void).cxx_destruct;
@end
