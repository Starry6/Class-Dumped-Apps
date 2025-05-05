@interface CSJABTest : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSString version;
@property (nonatomic) NSString param;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)csj_dictionaryValue;
- (void)setupDataWithDictionary:;
- (id)dictionary;
- (void)setDictionary:;
- (void)setVersion:;
- (id)version;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (id)param;
- (id)dictionaryValue;
- (void)encodeWithCoder:;
- (void)setParam:;
- (void).cxx_destruct;
@end
