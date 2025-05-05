@interface BDUGLuckyTimerPendantStateContent : BDUGLuckyJSONModel
@property (nonatomic) q state;
@property (nonatomic) NSString stateDesc;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString extra;
- (id)iconUrl;
- (void)setExtra:;
- (void)setIconUrl:;
- (void)setStateDesc:;
- (id)stateDesc;
- (id)schema;
- (id)extra;
- (void)setState:;
- (void)setSchema:;
- (long long)state;
- (void).cxx_destruct;
@end
