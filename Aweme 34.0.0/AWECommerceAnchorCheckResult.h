@interface AWECommerceAnchorCheckResult : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString reasonDetailUrl;
@property (nonatomic) NSError error;
@property (nonatomic) AWECodeGenComponentUnavailableNoticeModel notice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reasonDetailUrl;
- (void)setReasonDetailUrl:;
- (void)setError:;
- (void)setReason:;
- (BOOL)isValid;
- (void)setIsValid:;
- (void).cxx_destruct;
- (id)error;
- (id)reason;
- (id)notice;
- (void)setNotice:;
+ (id)resultWithIsValid:error:checkResultResponseModel:;
@end
