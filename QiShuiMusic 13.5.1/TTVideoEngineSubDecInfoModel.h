@interface TTVideoEngineSubDecInfoModel : NSObject
@property (nonatomic) NSMutableArray subModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubModel:;
- (id)initWithSubModels:;
- (void)setSubModels:;
- (long long)subtitleCount;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)jsonString;
- (id)subModels;
@end
