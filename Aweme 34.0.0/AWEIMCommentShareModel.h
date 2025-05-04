@interface AWEIMCommentShareModel : NSObject
@property (nonatomic) AWEAwemeModel aweModel;
@property (nonatomic) BOOL awemeUnavailable;
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) BOOL commentUnavailable;
- (id)commentModel;
- (void)setCommentModel:;
- (id)aweModel;
- (void)setAweModel:;
- (BOOL)awemeUnavailable;
- (BOOL)commentUnavailable;
- (id)initWithAweModel:commentModel:;
- (void)setCommentUnavailable:;
- (void)setAwemeUnavailable:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
