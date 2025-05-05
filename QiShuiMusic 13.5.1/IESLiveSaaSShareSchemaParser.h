@interface IESLiveSaaSShareSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSShareService> shareConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShareConfig:;
- (void)hideCommentView;
- (void)parseWithParams:fromInside:completion:;
- (id)shareConfig;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
