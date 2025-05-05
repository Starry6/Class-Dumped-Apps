@interface TCAddTopicDic : TCAPIRequest
@property (nonatomic) NSString paramRichtype;
@property (nonatomic) NSString paramRichval;
@property (nonatomic) NSString paramCon;
@property (nonatomic) NSString paramLbs_nm;
@property (nonatomic) NSString paramLbs_x;
@property (nonatomic) NSString paramLbs_y;
@property (nonatomic) NSString paramThirdSource;
- (void)setParamLbs_nm:;
- (id)paramCon;
- (id)paramLbs_nm;
- (id)paramLbs_x;
- (id)paramLbs_y;
- (id)paramRichtype;
- (id)paramRichval;
- (id)paramThirdSource;
- (void)setParamCon:;
- (void)setParamLbs_x:;
- (void)setParamLbs_y:;
- (void)setParamRichtype:;
- (void)setParamRichval:;
- (void)setParamThirdSource:;
- (void).cxx_destruct;
+ (id)dictionary;
@end
