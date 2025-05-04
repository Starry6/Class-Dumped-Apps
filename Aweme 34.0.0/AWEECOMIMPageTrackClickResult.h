@interface AWEECOMIMPageTrackClickResult : NSObject
@property (nonatomic) NSString actionType;
@property (nonatomic) q code;
@property (nonatomic) NSString errorMsg;
- (void)setErrorMsg:;
- (id)errorMsg;
- (id)actionType;
- (long long)code;
- (void)setActionType:;
- (void)setCode:;
- (void).cxx_destruct;
+ (id)resultWithActionType:code:errorMsg:;
@end
