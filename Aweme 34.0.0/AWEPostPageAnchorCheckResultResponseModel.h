@interface AWEPostPageAnchorCheckResultResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString reasonDetailUrl;
@property (nonatomic) AWECodeGenComponentUnavailableNoticeModel notice;
- (id)reasonDetailUrl;
- (void)setReasonDetailUrl:;
- (void)setReason:;
- (BOOL)isValid;
- (void)setIsValid:;
- (void).cxx_destruct;
- (id)reason;
- (id)notice;
- (void)setNotice:;
+ (id)JSONKeyPathsByPropertyKey;
@end
