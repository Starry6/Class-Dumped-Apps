@interface MontrealModelJSONParser : NSObject
@property (nonatomic) NSString jsonDir;
@property (nonatomic) MontrealNNModelNetwork network;
@property (nonatomic) NSDictionary infoDictionary;
- (id)infoDictionary;
- (id)network;
- (id)initWithURL:;
- (void).cxx_destruct;
- (id)createJSONFromFile:;
- (id)jsonDir;
@end
