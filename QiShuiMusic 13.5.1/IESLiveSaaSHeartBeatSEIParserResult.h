@interface IESLiveSaaSHeartBeatSEIParserResult : NSObject
@property (nonatomic) NSDictionary content;
@property (nonatomic) NSNumber ts;
@property (nonatomic) NSString sign;
@property (nonatomic) NSDictionary metaSEI;
@property (nonatomic) Q seiType;
@property (nonatomic) Q seiMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)metaSEI;
- (unsigned long long)seiMode;
- (unsigned long long)seiType;
- (void)setMetaSEI:;
- (void)setSeiMode:;
- (void)setSeiType:;
- (void)setSign:;
- (id)sign;
- (id)content;
- (void)setContent:;
- (id)ts;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (void)setTs:;
@end
