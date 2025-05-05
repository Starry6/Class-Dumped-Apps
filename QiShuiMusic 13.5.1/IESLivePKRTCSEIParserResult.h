@interface IESLivePKRTCSEIParserResult : IESLiveDynamicMTLModel
@property (nonatomic) NSNumber ts;
@property (nonatomic) NSNumber status;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) HTSInteractionStreamAppData appData;
@property (nonatomic) IESLiveInteractionCropData cropData;
@property (nonatomic) NSDictionary metaSEI;
@property (nonatomic) Q seiType;
@property (nonatomic) Q seiMode;
@property (nonatomic) BOOL immidiately;
- (id)metaSEI;
- (unsigned long long)seiMode;
- (unsigned long long)seiType;
- (void)setImmidiately:;
- (id)cropData;
- (BOOL)immidiately;
- (void)setCropData:;
- (void)setMetaSEI:;
- (void)setSeiMode:;
- (void)setSeiType:;
- (void).cxx_destruct;
- (void)setAppData:;
- (id)appData;
+ (id)JSONKeyPathsByPropertyKey;
@end
