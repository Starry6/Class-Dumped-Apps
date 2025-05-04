@interface AWEEcomSearchSchemaUtil : NSObject
@property (nonatomic) NSMutableDictionary enterFromToSearchConfigDict;
- (void)setEnterFromToSearchConfigDict:;
- (id)enterFromToSearchConfigDict;
- (id)getSearchConfig:;
- (void)saveSearchSchemaParams:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
