@interface TCSetUserHeadpic : TCAPIRequest
@property (nonatomic) UIImage paramImage;
@property (nonatomic) NSString paramFileName;
- (id)paramFileName;
- (id)paramImage;
- (void)setParamFileName:;
- (void)setParamImage:;
- (void).cxx_destruct;
+ (id)dictionary;
@end
