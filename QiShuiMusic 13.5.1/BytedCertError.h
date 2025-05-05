@interface BytedCertError : NSObject
@property (nonatomic) q errorCode;
@property (nonatomic) q detailErrorCode;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) NSString detailErrorMessage;
@property (nonatomic) NSError oriError;
@property (nonatomic) NSString requestUrl;
- (long long)detailErrorCode;
- (id)initWithType:errorMsg:oriError:;
- (id)detailErrorMessage;
- (id)initWithType:detailErrorCode:;
- (id)initWithType:oriError:;
- (id)oriError;
- (void)setDetailErrorCode:;
- (void)setDetailErrorMessage:;
- (void)setOriError:;
- (long long)errorCode;
- (id)requestUrl;
- (id)errorMessage;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:;
- (void)setErrorMessage:;
- (void)setRequestUrl:;
+ (id)trackErrorCodeForError:;
+ (id)trackErrorMsgForError:;
@end
