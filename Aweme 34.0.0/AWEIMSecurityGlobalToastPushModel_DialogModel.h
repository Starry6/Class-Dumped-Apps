@interface AWEIMSecurityGlobalToastPushModel_DialogModel : AWEBaseApiModel
@property (nonatomic) NSString scene;
@property (nonatomic) NSString toastCode;
@property (nonatomic) NSString bizID;
@property (nonatomic) NSString extra;
@property (nonatomic) q priority;
@property (nonatomic) NSString content;
- (void)setExtra:;
- (void)setBizID:;
- (id)toastCode;
- (void)setToastCode:;
- (void)setScene:;
- (id)content;
- (id)scene;
- (id)extra;
- (long long)priority;
- (void)setContent:;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)bizID;
+ (id)JSONKeyPathsByPropertyKey;
@end
