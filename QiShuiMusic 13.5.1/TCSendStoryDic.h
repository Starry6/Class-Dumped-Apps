@interface TCSendStoryDic : TCAPIRequest
@property (nonatomic) NSString paramTitle;
@property (nonatomic) NSString paramSummary;
@property (nonatomic) NSString paramDescription;
@property (nonatomic) NSString paramPics;
@property (nonatomic) NSString paramAct;
@property (nonatomic) NSString paramShareUrl;
- (id)paramAct;
- (id)paramDescription;
- (id)paramPics;
- (id)paramShareUrl;
- (id)paramSummary;
- (id)paramTitle;
- (void)setParamAct:;
- (void)setParamDescription:;
- (void)setParamPics:;
- (void)setParamShareUrl:;
- (void)setParamSummary:;
- (void)setParamTitle:;
- (id)init;
- (void).cxx_destruct;
+ (id)dictionary;
@end
