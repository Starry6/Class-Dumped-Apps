@interface AWECommentBelongData : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWECommentGeneralModelProtocol> generalModel;
@property (nonatomic) AWECommentModel commentModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setGeneralModel:;
- (id)generalModel;
- (id)commentModel;
- (void)setCommentModel:;
- (void).cxx_destruct;
@end
