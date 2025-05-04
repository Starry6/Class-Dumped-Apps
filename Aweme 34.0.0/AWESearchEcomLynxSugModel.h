@interface AWESearchEcomLynxSugModel : AWEBaseApiModel
@property (nonatomic) NSString sugType;
@property (nonatomic) NSString uiType;
@property (nonatomic) NSString jumpType;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSString rawData;
- (id)jumpSchema;
- (id)jumpType;
- (void)setJumpType:;
- (void)setJumpSchema:;
- (id)sugType;
- (void)setSugType:;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)rawData;
- (void)setUiType:;
- (id)uiType;
+ (id)JSONKeyPathsByPropertyKey;
@end
