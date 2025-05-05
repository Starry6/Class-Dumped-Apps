@interface IESLiveExplainSEIResult : NSObject
@property (nonatomic) IESLiveSaaSLiveRoomPullExtension extension;
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
- (void)setExtension:;
- (id)extension;
- (void).cxx_destruct;
@end
