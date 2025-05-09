@interface AWEProfileFavoriteRawRequestConfig : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q action;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString extraID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) @? block;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSObject model;
@property (nonatomic) # modelClass;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (void)setExtraID:;
- (id)extraID;
- (void)configDefaultValue;
- (void)setModel:;
- (id)itemID;
- (void)setItemID:;
- (id)init;
- (void)setModelClass:;
- (void)setAction:;
- (id)block;
- (unsigned long long)type;
- (void)setBlock:;
- (unsigned long long)action;
- (id)model;
- (void)setType:;
- (void).cxx_destruct;
- (Class)modelClass;
@end
