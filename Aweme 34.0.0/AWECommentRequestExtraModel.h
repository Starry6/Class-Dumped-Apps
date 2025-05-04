@interface AWECommentRequestExtraModel : NSObject
@property (nonatomic) NSDictionary listExtraParams;
@property (nonatomic) NSDictionary postExtraParams;
@property (nonatomic) NSDictionary diggExtraParams;
- (id)postExtraParams;
- (id)listExtraParams;
- (id)diggExtraParams;
- (void)setListExtraParams:;
- (void)setPostExtraParams:;
- (void)setDiggExtraParams:;
- (void).cxx_destruct;
@end
