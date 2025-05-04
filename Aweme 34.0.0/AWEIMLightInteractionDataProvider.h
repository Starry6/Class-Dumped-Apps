@interface AWEIMLightInteractionDataProvider : NSObject
@property (nonatomic) NSMutableDictionary configDict;
- (id)allConfigs;
- (id)configWithName:;
- (BOOL)isValidConfigV2:;
- (id)init;
- (id)configDict;
- (void)setConfigDict:;
- (void).cxx_destruct;
@end
