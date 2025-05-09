@interface CJPayDiscountBanner : JSONModel
@property (nonatomic) NSString banner;
@property (nonatomic) NSString url;
@property (nonatomic) NSString stayTime;
@property (nonatomic) NSString gotoType;
@property (nonatomic) NSString resourceNo;
@property (nonatomic) NSString picUrl;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) q sequence;
@property (nonatomic) q showTime;
- (id)jumpUrl;
- (id)gotoType;
- (id)picUrl;
- (id)resourceNo;
- (void)setGotoType:;
- (void)setJumpUrl:;
- (void)setPicUrl:;
- (void)setResourceNo:;
- (void)setShowTime:;
- (void)setStayTime:;
- (long long)showTime;
- (id)stayTime;
- (id)banner;
- (id)url;
- (void)setSequence:;
- (void)setUrl:;
- (void)setBanner:;
- (void).cxx_destruct;
- (long long)sequence;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
