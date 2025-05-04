@interface AWEDataLayerBaseDatabaseConfig : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL useQueue;
- (BOOL)useQueue;
- (void)setUseQueue:;
- (void)setIdentifier:;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)validateConfig;
@end
